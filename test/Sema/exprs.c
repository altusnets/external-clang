// RUN: clang %s -verify -pedantic -fsyntax-only

// PR1966
_Complex double test1() {
  return __extension__ 1.0if;
}

_Complex double test2() {
  return 1.0if;    // expected-warning {{imaginary constants are an extension}}
}

// rdar://6097308
void test3() {
  int x;
  (__extension__ x) = 10;
}

// rdar://6162726
void test4() {
      static int var;
      var =+ 5;  // expected-warning {{use of unary operator that may be intended as compound assignment (+=)}}
      var =- 5;  // expected-warning {{use of unary operator that may be intended as compound assignment (-=)}}
      var = +5;
      var = -5;
}

// rdar://6319320
void test5(int *X, float *P) {
  (float*)X = P;   // expected-error {{assignment to cast is illegal, lvalue casts are not supported}}
}

void test6() {
  int X;
  X();  // expected-error {{called object type 'int' is not a function or function pointer}}
}

void test7(int *P, _Complex float Gamma) {
   P = (P-42) + Gamma*4;  // expected-error {{invalid operands to binary expression ('int *' and '_Complex float')}}
}

