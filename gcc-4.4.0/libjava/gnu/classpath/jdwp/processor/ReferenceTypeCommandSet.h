
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_ReferenceTypeCommandSet__
#define __gnu_classpath_jdwp_processor_ReferenceTypeCommandSet__

#pragma interface

#include <gnu/classpath/jdwp/processor/CommandSet.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace processor
        {
            class ReferenceTypeCommandSet;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::classpath::jdwp::processor::ReferenceTypeCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{

public:
  ReferenceTypeCommandSet();
  virtual jboolean runCommand(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
private:
  void executeSignature(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClassLoader(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeModifiers(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeFields(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeMethods(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeGetValues(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSourceFile(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeNestedTypes(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeStatus(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeInterfaces(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeClassObject(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSourceDebugExtension(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeSignatureWithGeneric(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeFieldWithGeneric(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeMethodsWithGeneric(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_processor_ReferenceTypeCommandSet__