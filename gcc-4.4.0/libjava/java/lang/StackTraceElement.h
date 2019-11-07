
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_StackTraceElement__
#define __java_lang_StackTraceElement__

#pragma interface

#include <java/lang/Object.h>

class java::lang::StackTraceElement : public ::java::lang::Object
{

public: // actually package-private
  StackTraceElement(::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *, jboolean);
public:
  StackTraceElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jint);
  ::java::lang::String * getFileName();
  jint getLineNumber();
  ::java::lang::String * getClassName();
  ::java::lang::String * getMethodName();
  jboolean isNativeMethod();
  ::java::lang::String * toString();
  jboolean equals(::java::lang::Object *);
  jint hashCode();
private:
  static jboolean equals(::java::lang::Object *, ::java::lang::Object *);
  static jint hashCode(::java::lang::Object *);
  static const jlong serialVersionUID = 6992337162326171013LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) fileName;
  jint lineNumber;
  ::java::lang::String * declaringClass;
  ::java::lang::String * methodName;
  jboolean isNative;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_StackTraceElement__