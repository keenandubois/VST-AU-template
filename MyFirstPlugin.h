#ifndef __MYFIRSTPLUGIN__
#define __MYFIRSTPLUGIN__

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextra-tokens"
#include "IPlug_include_in_plug_hdr.h"
#pragma clang diagnostic pop

class MyFirstPlugin : public IPlug
{
public:
  MyFirstPlugin(IPlugInstanceInfo instanceInfo);
  ~MyFirstPlugin();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
