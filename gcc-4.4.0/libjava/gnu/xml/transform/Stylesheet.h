
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_transform_Stylesheet__
#define __gnu_xml_transform_Stylesheet__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace transform
      {
          class Bindings;
          class Stylesheet;
          class Template;
          class TemplateNode;
          class TransformerFactoryImpl;
          class TransformerImpl;
      }
      namespace xpath
      {
          class NameTest;
          class XPathImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
      namespace xpath
      {
          class XPathFunction;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Document;
          class NamedNodeMap;
          class Node;
          class Text;
      }
    }
  }
}

class gnu::xml::transform::Stylesheet : public ::java::lang::Object
{

public: // actually package-private
  Stylesheet(::gnu::xml::transform::TransformerFactoryImpl *, ::gnu::xml::transform::Stylesheet *, ::org::w3c::dom::Document *, ::java::lang::String *, jint);
  virtual ::gnu::xml::transform::Stylesheet * getRootStylesheet();
  virtual void initDefaultDecimalFormat();
public:
  virtual ::java::lang::Object * clone();
public: // actually package-private
  virtual void initTopLevelVariables(::org::w3c::dom::Node *);
public:
  virtual ::java::lang::String * getNamespaceURI(::java::lang::String *);
  virtual ::java::lang::String * getPrefix(::java::lang::String *);
  virtual ::java::util::Iterator * getPrefixes(::java::lang::String *);
public: // actually package-private
  virtual ::javax::xml::namespace::QName * getQName(::java::lang::String *);
  virtual ::gnu::xml::transform::TemplateNode * getTemplate(::javax::xml::namespace::QName *, ::org::w3c::dom::Node *, jboolean);
  virtual ::gnu::xml::transform::TemplateNode * getTemplate(::javax::xml::namespace::QName *, ::javax::xml::namespace::QName *);
  virtual ::gnu::xml::transform::Template * parseTemplate(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
  virtual void parseOutput(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
  virtual void parseKey(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
  virtual void parseDecimalFormat(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
private:
  jchar parseDFChar(::org::w3c::dom::NamedNodeMap *, ::java::lang::String *, jchar);
  ::java::lang::String * parseDFString(::org::w3c::dom::NamedNodeMap *, ::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  virtual void parseNamespaceAlias(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
  virtual void parseAttributeSet(::org::w3c::dom::Node *, ::org::w3c::dom::NamedNodeMap *);
  virtual void parse(::org::w3c::dom::Node *, jboolean);
  virtual void doParse(::org::w3c::dom::Node *, jboolean);
  virtual ::gnu::xml::xpath::NameTest * parseNameTest(::java::lang::String *);
  virtual ::gnu::xml::transform::TemplateNode * parseAttributeValueTemplate(::java::lang::String *, ::org::w3c::dom::Node *);
  virtual jboolean isPreserved(::org::w3c::dom::Text *, jboolean);
public:
  virtual ::javax::xml::xpath::XPathFunction * resolveFunction(::javax::xml::namespace::QName *, jint);
public: // actually package-private
  virtual ::gnu::xml::transform::TemplateNode * parseApplyTemplates(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseCallTemplate(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseValueOf(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseForEach(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseIf(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseWhen(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseElement(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseAttribute(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseText(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseCopy(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseProcessingInstruction(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseNumber(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseCopyOf(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parseMessage(::org::w3c::dom::Node *);
  virtual ::gnu::xml::transform::TemplateNode * parse(::org::w3c::dom::Node *);
private:
  ::gnu::xml::transform::TemplateNode * doParse(::org::w3c::dom::Node *);
public: // actually package-private
  virtual ::java::util::List * parseSortKeys(::org::w3c::dom::Node *);
  virtual ::java::util::List * parseWithParams(::org::w3c::dom::Node *);
  virtual void addNamespaceNodes(::org::w3c::dom::Node *, ::org::w3c::dom::Node *, ::org::w3c::dom::Document *, ::java::util::Collection *);
  static ::java::lang::String * getAttribute(::org::w3c::dom::NamedNodeMap *, ::java::lang::String *);
  static ::java::lang::String * getRequiredAttribute(::org::w3c::dom::NamedNodeMap *, ::java::lang::String *, ::org::w3c::dom::Node *);
public:
  virtual void handle(jshort, ::java::lang::String *, ::java::lang::Object *, ::org::w3c::dom::Node *, ::org::w3c::dom::Node *);
  virtual ::java::lang::String * toString();
public: // actually package-private
  static ::java::lang::String * XSL_NS;
private:
  static ::gnu::xml::xpath::NameTest * STYLESHEET_PRESERVE_TEXT;
public: // actually package-private
  static const jint OUTPUT_XML = 0;
  static const jint OUTPUT_HTML = 1;
  static const jint OUTPUT_TEXT = 2;
  ::gnu::xml::transform::TransformerFactoryImpl * __attribute__((aligned(__alignof__( ::java::lang::Object)))) factory;
  ::gnu::xml::transform::TransformerImpl * transformer;
  ::gnu::xml::transform::Stylesheet * parent;
  ::gnu::xml::xpath::XPathImpl * xpath;
  ::java::lang::String * systemId;
  jint precedence;
  jboolean debug;
  ::java::lang::String * version;
  ::java::util::Collection * extensionElementPrefixes;
  ::java::util::Collection * excludeResultPrefixes;
  ::java::util::Set * stripSpace;
  ::java::util::Set * preserveSpace;
  ::org::w3c::dom::Node * output;
  jint outputMethod;
  ::java::lang::String * outputVersion;
  ::java::lang::String * outputEncoding;
  jboolean outputOmitXmlDeclaration;
  jboolean outputStandalone;
  ::java::lang::String * outputPublicId;
  ::java::lang::String * outputSystemId;
  ::java::util::Collection * outputCdataSectionElements;
  jboolean outputIndent;
  ::java::lang::String * outputMediaType;
  ::java::util::Collection * keys;
  ::java::util::Map * decimalFormats;
  ::java::util::Map * namespaceAliases;
  ::java::util::List * attributeSets;
  ::java::util::List * variables;
  ::gnu::xml::transform::Bindings * bindings;
  ::java::util::LinkedList * templates;
  ::gnu::xml::transform::TemplateNode * builtInNodeTemplate;
  ::gnu::xml::transform::TemplateNode * builtInTextTemplate;
  ::org::w3c::dom::Node * current;
  jboolean terminated;
  ::gnu::xml::transform::Template * currentTemplate;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_transform_Stylesheet__
