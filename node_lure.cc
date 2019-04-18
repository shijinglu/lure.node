#include <nan.h>

using namespace v8;

// NAN_METHOD(Method) {
//   NanScope();
//   NanReturnValue(String::New("world"));
// }

NAN_METHOD(hello) {
    info.GetReturnValue().Set(Nan::New("This is a thing.").ToLocalChecked());
}

NAN_MODULE_INIT(Init) {
  NAN_EXPORT(target, hello);
}

// void Init(Handle<Object> exports) {
//   exports->Set(NanSymbol("hello"), FunctionTemplate::New(Method)->GetFunction());
// }

// NODE_MODULE(lure, Init)
