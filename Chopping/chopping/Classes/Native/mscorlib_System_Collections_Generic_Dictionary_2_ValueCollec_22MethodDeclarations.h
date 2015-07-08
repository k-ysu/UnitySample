#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2183;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2176;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t2402;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11860_gshared (ValueCollection_t2183 * __this, Dictionary_2_t2176 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11860(__this, ___dictionary, method) (( void (*) (ValueCollection_t2183 *, Dictionary_2_t2176 *, const MethodInfo*))ValueCollection__ctor_m11860_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11861_gshared (ValueCollection_t2183 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11861(__this, ___item, method) (( void (*) (ValueCollection_t2183 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11862_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11862(__this, method) (( void (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11863_gshared (ValueCollection_t2183 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11863(__this, ___item, method) (( bool (*) (ValueCollection_t2183 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11863_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11864_gshared (ValueCollection_t2183 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11864(__this, ___item, method) (( bool (*) (ValueCollection_t2183 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11864_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11865_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11865(__this, method) (( Object_t* (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11866_gshared (ValueCollection_t2183 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11866(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2183 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11866_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11867_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11867(__this, method) (( Object_t * (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11868_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11868(__this, method) (( bool (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11869_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11869(__this, method) (( Object_t * (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11870_gshared (ValueCollection_t2183 * __this, ByteU5BU5D_t102* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11870(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2183 *, ByteU5BU5D_t102*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11870_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2184  ValueCollection_GetEnumerator_m11871_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11871(__this, method) (( Enumerator_t2184  (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_GetEnumerator_m11871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11872_gshared (ValueCollection_t2183 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11872(__this, method) (( int32_t (*) (ValueCollection_t2183 *, const MethodInfo*))ValueCollection_get_Count_m11872_gshared)(__this, method)
