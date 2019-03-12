#include "Itestbinder.h"
#include <binder/Parcel.h>
#include <binder/IInterface.h>
namespace android{
  enum {
    NOTIFY_CALLBACK,
  };
//////////////////???
  class Bpcallback : public BpInterface<Icallback>{
    public:
      Bpcallback(const sp<IBinder>& impl) : BpInterface<Icallback>(impl){
      }
      virtual int notifyCallback(int a){
        LOGD("==========================================================\n");
        LOGD("TK---->>>>>>Icallback.cpp>>>>Bpcallback::notifyCallback\n");
        Parcel data,reply;
        data.writeInt32(a);
        remote()->transact(NOTIFY_CALLBACK,data,&reply);
        return reply.readInt32();
      }
  };
 
  IMPLEMENT_META_INTERFACE(callback, "android.test.Icallback");
/////////////////???
  status_t Bncallback::onTransact(
      uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags){
    LOGD("TK---->>>>>>Icallback.cpp>>>>Bncallback::onTransact\n");
    switch (code) {
      case NOTIFY_CALLBACK:{
        //CHECK_INTERFACE(Itestbinder, data, reply);
        LOGD("TK---->>>>>>Icallback.cpp>>>>Bncallback::onTransact>>NOTIFY_CALLBACK\n");
        reply->writeInt32(notifyCallback((int) data.readInt32()) );
        return NO_ERROR;
      } break;
      default:{
        LOGD("TK---->>>>>>Icallback.cpp>>>>Bncallback::onTransact>>222\n");
        return BBinder::onTransact(code, data, reply, flags);
      }
    }
  }
}