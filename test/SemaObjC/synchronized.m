// RUN: clang-cc -fsyntax-only -verify %s

@class PBXTrackableTaskManager;

@implementation PBXTrackableTaskManager
- (id) init {}
- (void) unregisterTask:(id) task {
  @synchronized (self) {
  id taskID = [task taskIdentifier];  // expected-warning {{method '-taskIdentifier' not found (return type defaults to 'id')}}
  }
}
@end


struct x { int a; } b;

void test1() {
  @synchronized (b) {  // expected-error {{@synchronized requires an Objective-C object type ('struct x' invalid)}}
  }

  @synchronized (42) {  // expected-error {{@synchronized requires an Objective-C object type ('int' invalid)}}
  }
}
