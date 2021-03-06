/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.Log
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class Log;
	class Log
		: public object<Log>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)

		explicit Log(jobject jobj)
		: object<Log>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void setOutputPath(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jint);
		static void setOutputStream(local_ref< java::io::InputStream >  const&, local_ref< java::io::OutputStream >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jint);
		static void reset();
		static void setLevel(jint, jboolean);
		static jint getLevel();
		static void f(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void e(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void w(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void i(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void d(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void v(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void f(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static void e(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static void w(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static void i(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static void d(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static void v(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		static local_ref< java::lang::String > getSysInfo();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > LEVEL_VERBOSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > LEVEL_DEBUG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > LEVEL_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > LEVEL_WARNING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > LEVEL_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > LEVEL_FATAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > LEVEL_NONE;
	}; //class Log

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::platformtools::Log::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void com::tencent::mm::sdk::platformtools::Log::setOutputPath(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, jint a3)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0, a1, a2, a3);
}

void com::tencent::mm::sdk::platformtools::Log::setOutputStream(local_ref< java::io::InputStream > const &a0, local_ref< java::io::OutputStream > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, jint a4)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1, a2, a3, a4);
}

void com::tencent::mm::sdk::platformtools::Log::reset()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(3), 
		void
	>();
}

void com::tencent::mm::sdk::platformtools::Log::setLevel(jint a0, jboolean a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1);
}

jint com::tencent::mm::sdk::platformtools::Log::getLevel()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>();
}

void com::tencent::mm::sdk::platformtools::Log::f(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::e(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(7),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::w(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(8),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::i(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(9),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::d(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(10),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::v(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(11),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(a0, a1);
}

void com::tencent::mm::sdk::platformtools::Log::f(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(12),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(a0, a1, a2);
}

void com::tencent::mm::sdk::platformtools::Log::e(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(13),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(a0, a1, a2);
}

void com::tencent::mm::sdk::platformtools::Log::w(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(14),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(a0, a1, a2);
}

void com::tencent::mm::sdk::platformtools::Log::i(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(15),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(a0, a1, a2);
}

void com::tencent::mm::sdk::platformtools::Log::d(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(16),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(a0, a1, a2);
}

void com::tencent::mm::sdk::platformtools::Log::v(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(17),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(a0, a1, a2);
}

local_ref< java::lang::String > com::tencent::mm::sdk::platformtools::Log::getSysInfo()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_NAME(18),
		com::tencent::mm::sdk::platformtools::Log::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String >
	>();
}



static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(0),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_VERBOSE;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(1),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_DEBUG;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(2),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_INFO;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(3),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_WARNING;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(4),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_ERROR;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(5),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_FATAL;

static_field<
	com::tencent::mm::sdk::platformtools::Log::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_NAME(6),
	com::tencent::mm::sdk::platformtools::Log::J2CPP_FIELD_SIGNATURE(6),
	jint
> com::tencent::mm::sdk::platformtools::Log::LEVEL_NONE;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::Log,"com/tencent/mm/sdk/platformtools/Log")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,1,"setOutputPath","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,2,"setOutputStream","(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,3,"reset","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,4,"setLevel","(IZ)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,5,"getLevel","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,6,"f","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,7,"e","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,8,"w","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,9,"i","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,10,"d","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,11,"v","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,12,"f","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,13,"e","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,14,"w","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,15,"i","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,16,"d","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,17,"v","(Ljava/lang/String;Ljava/lang/String;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,18,"getSysInfo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::Log,19,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,0,"LEVEL_VERBOSE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,1,"LEVEL_DEBUG","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,2,"LEVEL_INFO","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,3,"LEVEL_WARNING","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,4,"LEVEL_ERROR","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,5,"LEVEL_FATAL","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,6,"LEVEL_NONE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,7,"level","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,8,"ar","Ljava/io/PrintStream;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,9,"as","[B")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::Log,10,"at","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_LOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
