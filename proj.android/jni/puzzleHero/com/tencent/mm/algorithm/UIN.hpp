/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.algorithm.UIN
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_DECL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace algorithm {

	class UIN;
	class UIN
		: public object<UIN>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_FIELD(0)

		explicit UIN(jobject jobj)
		: object<UIN>(jobj)
		{
		}

		operator local_ref<java::lang::Number>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		UIN(jint);
		UIN(jlong);
		jint value();
		static jint valueOf(local_ref< java::lang::String >  const&);
		jdouble doubleValue();
		jfloat floatValue();
		jint intValue();
		jlong longValue();
		local_ref< java::lang::String > toString();

	}; //class UIN

} //namespace algorithm
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_IMPL

namespace j2cpp {



com::tencent::mm::algorithm::UIN::operator local_ref<java::lang::Number>() const
{
	return local_ref<java::lang::Number>(get_jobject());
}

com::tencent::mm::algorithm::UIN::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::algorithm::UIN::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


com::tencent::mm::algorithm::UIN::UIN(jint a0)
: object<com::tencent::mm::algorithm::UIN>(
	call_new_object<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(0),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



com::tencent::mm::algorithm::UIN::UIN(jlong a0)
: object<com::tencent::mm::algorithm::UIN>(
	call_new_object<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(1),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint com::tencent::mm::algorithm::UIN::value()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(2),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint com::tencent::mm::algorithm::UIN::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(3),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(a0);
}

jdouble com::tencent::mm::algorithm::UIN::doubleValue()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(4),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(4), 
		jdouble
	>(get_jobject());
}

jfloat com::tencent::mm::algorithm::UIN::floatValue()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(5),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(5), 
		jfloat
	>(get_jobject());
}

jint com::tencent::mm::algorithm::UIN::intValue()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(6),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jlong com::tencent::mm::algorithm::UIN::longValue()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(7),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(get_jobject());
}

local_ref< java::lang::String > com::tencent::mm::algorithm::UIN::toString()
{
	return call_method<
		com::tencent::mm::algorithm::UIN::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_NAME(8),
		com::tencent::mm::algorithm::UIN::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::UIN,"com/tencent/mm/algorithm/UIN")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,1,"<init>","(J)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,2,"value","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,3,"valueOf","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,4,"doubleValue","()D")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,5,"floatValue","()F")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,6,"intValue","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,7,"longValue","()J")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::UIN,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::UIN,0,"h","I")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_UIN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
