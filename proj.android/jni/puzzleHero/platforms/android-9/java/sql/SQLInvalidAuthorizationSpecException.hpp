/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLInvalidAuthorizationSpecException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace sql { class SQLNonTransientException; } } }
namespace j2cpp { namespace java { namespace sql { class SQLException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/sql/SQLException.hpp>
#include <java/sql/SQLNonTransientException.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLInvalidAuthorizationSpecException;
	class SQLInvalidAuthorizationSpecException
		: public object<SQLInvalidAuthorizationSpecException>
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

		explicit SQLInvalidAuthorizationSpecException(jobject jobj)
		: object<SQLInvalidAuthorizationSpecException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::sql::SQLNonTransientException>() const;
		operator local_ref<java::sql::SQLException>() const;
		operator local_ref<java::io::Serializable>() const;


		SQLInvalidAuthorizationSpecException();
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::Throwable > const&);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, local_ref< java::lang::Throwable > const&);
	}; //class SQLInvalidAuthorizationSpecException

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_IMPL

namespace j2cpp {



java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::sql::SQLNonTransientException>() const
{
	return local_ref<java::sql::SQLNonTransientException>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::sql::SQLException>() const
{
	return local_ref<java::sql::SQLException>(get_jobject());
}

java::sql::SQLInvalidAuthorizationSpecException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException()
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(0),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(1),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(2),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(3),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::Throwable > const &a0)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(4),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(5),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(5)
	>(a0, a1)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(6),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(6)
	>(a0, a1, a2)
)
{
}



java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::lang::Throwable > const &a3)
: object<java::sql::SQLInvalidAuthorizationSpecException>(
	call_new_object<
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_CLASS_NAME,
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_NAME(7),
		java::sql::SQLInvalidAuthorizationSpecException::J2CPP_METHOD_SIGNATURE(7)
	>(a0, a1, a2, a3)
)
{
}



J2CPP_DEFINE_CLASS(java::sql::SQLInvalidAuthorizationSpecException,"java/sql/SQLInvalidAuthorizationSpecException")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,3,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,4,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,5,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,6,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLInvalidAuthorizationSpecException,7,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLINVALIDAUTHORIZATIONSPECEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
