
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLDocument$1__
#define __javax_swing_text_html_HTMLDocument$1__

#pragma interface

#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class MutableAttributeSet;
        namespace html
        {
            class HTML$Tag;
            class HTMLDocument;
            class HTMLDocument$1;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLDocument$1 : public ::javax::swing::text::html::HTMLDocument$HTMLReader
{

public: // actually package-private
  HTMLDocument$1(::javax::swing::text::html::HTMLDocument *, jint, jint, jint, ::javax::swing::text::html::HTML$Tag *);
public:
  void handleStartTag(::javax::swing::text::html::HTML$Tag *, ::javax::swing::text::MutableAttributeSet *, jint);
  void handleEndTag(::javax::swing::text::html::HTML$Tag *, jint);
public: // actually package-private
  ::javax::swing::text::html::HTMLDocument * __attribute__((aligned(__alignof__( ::javax::swing::text::html::HTMLDocument$HTMLReader)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLDocument$1__
