
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny_NameValuePairSeqHelper__
#define __org_omg_DynamicAny_NameValuePairSeqHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace DynamicAny
      {
          class NameValuePair;
          class NameValuePairSeqHelper;
      }
    }
  }
}

class org::omg::DynamicAny::NameValuePairSeqHelper : public ::java::lang::Object
{

public:
  NameValuePairSeqHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, JArray< ::org::omg::DynamicAny::NameValuePair * > *);
  static JArray< ::org::omg::DynamicAny::NameValuePair * > * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static JArray< ::org::omg::DynamicAny::NameValuePair * > * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, JArray< ::org::omg::DynamicAny::NameValuePair * > *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_DynamicAny_NameValuePairSeqHelper__