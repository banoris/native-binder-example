#include "../interface/Itestbinder.h"
 
namespace android{
  class client{
    public:
      static const sp<Itestbinder>& get_test_binder();
      static sp<Itestbinder> gtestbinder;
  };
}