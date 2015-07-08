#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2014;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2007;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2290;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Int32[]
struct Int32U5BU5D_t588;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m9724_gshared (ValueCollection_t2014 * __this, Dictionary_2_t2007 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m9724(__this, ___dictionary, method) (( void (*) (ValueCollection_t2014 *, Dictionary_2_t2007 *, const MethodInfo*))ValueCollection__ctor_m9724_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9725_gshared (ValueCollection_t2014 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9725(__this, ___item, method) (( void (*) (ValueCollection_t2014 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9725_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9726_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9726(__this, method) (( void (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9727_gshared (ValueCollection_t2014 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9727(__this, ___item, method) (( bool (*) (ValueCollection_t2014 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9727_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9728_gshared (ValueCollection_t2014 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9728(__this, ___item, method) (( bool (*) (ValueCollection_t2014 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9728_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9729_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9729(__this, method) (( Object_t* (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9729_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m9730_gshared (ValueCollection_t2014 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m9730(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2014 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m9730_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9731_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9731(__this, method) (( Object_t * (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9732_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9732(__this, method) (( bool (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9732_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m9733_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m9733(__this, method) (( Object_t * (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m9733_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m9734_gshared (ValueCollection_t2014 * __this, Int32U5BU5D_t588* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m9734(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2014 *, Int32U5BU5D_t588*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m9734_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2015  ValueCollection_GetEnumerator_m9735_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m9735(__this, method) (( Enumerator_t2015  (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_GetEnumerator_m9735_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m9736_gshared (ValueCollection_t2014 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m9736(__this, method) (( int32_t (*) (ValueCollection_t2014 *, const MethodInfo*))ValueCollection_get_Count_m9736_gshared)(__this, method)
