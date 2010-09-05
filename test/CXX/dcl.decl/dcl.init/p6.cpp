// RUN: %clang_cc1 -fsyntax-only -verify %s

// FIXME: Very incomplete!

// If a program calls for the default initialization of an object of a
// const-qualified type T, T shall be a class type with a
// user-provided default constructor.
struct MakeNonPOD { MakeNonPOD(); };
struct NoUserDefault : public MakeNonPOD { };
struct HasUserDefault { HasUserDefault(); };

void test_const_default_init() {
  const NoUserDefault x1; // expected-error{{default initialization of an object of const type 'NoUserDefault const' requires a user-provided default constructor}}
  const HasUserDefault x2;
  const int x3; // expected-error{{default initialization of an object of const type 'const int'}}
}
