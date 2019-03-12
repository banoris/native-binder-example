#include "../interface/Itestbinder.h"
#include "../interface/Icallback.h"
#include <binder/BinderService.h>
namespace android{
  class callback: public Bncallback{
    friend class BinderService<callback>;
    public:
      virtual int notifyCallback(int a);
      virtual     status_t    onTransact(
                                uint32_t code,
                                const Parcel& data,
                                Parcel* reply,
                                uint32_t flags);
  };
}