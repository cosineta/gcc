
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JColorChooser$DefaultResetListener__
#define __javax_swing_JColorChooser$DefaultResetListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JColorChooser;
        class JColorChooser$DefaultResetListener;
    }
  }
}

class javax::swing::JColorChooser$DefaultResetListener : public ::java::lang::Object
{

public:
  JColorChooser$DefaultResetListener(::javax::swing::JColorChooser *);
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
private:
  ::javax::swing::JColorChooser * __attribute__((aligned(__alignof__( ::java::lang::Object)))) chooser;
  ::java::awt::Color * init;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JColorChooser$DefaultResetListener__
