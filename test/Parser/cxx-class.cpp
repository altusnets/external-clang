// RUN: clang -parse-noop -verify %s
class C;
class C {
public:
protected:
  typedef int A,B;
  static int sf(), u;

  struct S {};
  enum {};
  int; // expected-error {{error: declaration does not declare anything}}
  int : 1, : 2;

public:
  void m() {
    int l = 2;
  }
  virtual int vf() const volatile = 0;
  
private:
  int x,f(),y,g();
  inline int h();
  static const int sci = 10;
  mutable int mi;
};
void glo()
{
  struct local {};
}
