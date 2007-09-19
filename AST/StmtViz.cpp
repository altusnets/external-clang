//===--- StmtViz.cpp - Graphviz visualization for Stmt ASTs -----*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file was developed by Ted Kremenek and is distributed under
// the University of Illinois Open Source License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//  This file implements Stmt::viewAST, which generates a Graphviz DOT file
//  that depicts the AST and then calls Graphviz/dot+gv on it.
//
//===----------------------------------------------------------------------===//

#include "clang/AST/StmtGraphTraits.h"
#include "llvm/Support/GraphWriter.h"
#include <iostream>
#include <sstream>

using namespace clang;

void Stmt::viewAST() const {
#ifndef NDEBUG
  llvm::ViewGraph(this,"AST");
#else
  std::cerr << "Stmt::viewAST is only available in debug builds on "
  << "systems with Graphviz or gv!\n";
#endif
}

namespace llvm {
template<>
struct DOTGraphTraits<const Stmt*> : public DefaultDOTGraphTraits {
  static std::string getNodeLabel(const Stmt* Node, const Stmt* Graph) {
    
#ifndef NDEBUG
    std::ostringstream Out;
    
    if (Node)
      Out << Node->getStmtClassName();
    else
      Out << "<NULL>";
      
    std::string OutStr = Out.str();    
    if (OutStr[0] == '\n') OutStr.erase(OutStr.begin());
    
    // Process string output to make it nicer...
    for (unsigned i = 0; i != OutStr.length(); ++i)
      if (OutStr[i] == '\n') {                            // Left justify
        OutStr[i] = '\\';
        OutStr.insert(OutStr.begin()+i+1, 'l');
      }
    
    return OutStr;
#else
    return "";
#endif
  }
};
} // end namespace llvm
