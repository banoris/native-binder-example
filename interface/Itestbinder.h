#ifndef Itestbinder_H  
#define Itestbinder_H 
#include <binder/IInterface.h>
#include "Icallback.h"
namespace android{
  class Itestbinder : public IInterface{
    public:
      DECLARE_META_INTERFACE(testbinder);
      virtual int testinterface(int a) = 0;
      virtual int setcallback(const sp<Icallback>& callback) = 0;
  };
  class Bntestbinder : public BnInterface<Itestbinder>{
  public:
    virtual status_t    onTransact( uint32_t code,
                                    const Parcel& data,
                                    Parcel* reply,
                                    uint32_t flags = 0);
  };
}
#endif