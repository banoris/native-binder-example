#include "../interface/Itestbinder.h"
#include "../interface/Icallback.h"
#include <binder/BinderService.h>
namespace android{
  class testbinder: 
      public BinderService<testbinder>,
      public Bntestbinder{
    friend class BinderService<testbinder>;
    public:
      static const char* getServiceName() { return "test.Itestbinder"; }
      virtual int testinterface(int a);
      virtual int setcallback(const sp<Icallback>& callback);
      virtual     status_t    onTransact(
                                uint32_t code,
                                const Parcel& data,
                                Parcel* reply,
                                uint32_t flags);
    protected:
      sp<Icallback> mcallback;
  };
}