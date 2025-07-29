#include <node.h>
#include <print>

#define NODE_MODULE_VERSION 137

void Method(const v8::FunctionCallbackInfo<v8::Value>& args) {
	std::print("hello\n");
}

void Initialize(v8::Local<v8::Object> exports) {
	NODE_SET_METHOD(exports, "hello", Method);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)
