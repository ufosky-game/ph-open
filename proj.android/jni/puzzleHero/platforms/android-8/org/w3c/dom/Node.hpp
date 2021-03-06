/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Node
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NODE_HPP_DECL
#define J2CPP_ORG_W3C_DOM_NODE_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Document; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NamedNodeMap; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class UserDataHandler; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NodeList; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/w3c/dom/NamedNodeMap.hpp>
#include <org/w3c/dom/NodeList.hpp>
#include <org/w3c/dom/UserDataHandler.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Node;
	class Node
		: public object<Node>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
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
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)

		explicit Node(jobject jobj)
		: object<Node>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getNodeName();
		local_ref< java::lang::String > getNodeValue();
		void setNodeValue(local_ref< java::lang::String >  const&);
		jshort getNodeType();
		local_ref< org::w3c::dom::Node > getParentNode();
		local_ref< org::w3c::dom::NodeList > getChildNodes();
		local_ref< org::w3c::dom::Node > getFirstChild();
		local_ref< org::w3c::dom::Node > getLastChild();
		local_ref< org::w3c::dom::Node > getPreviousSibling();
		local_ref< org::w3c::dom::Node > getNextSibling();
		local_ref< org::w3c::dom::NamedNodeMap > getAttributes();
		local_ref< org::w3c::dom::Document > getOwnerDocument();
		local_ref< org::w3c::dom::Node > insertBefore(local_ref< org::w3c::dom::Node >  const&, local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::Node > replaceChild(local_ref< org::w3c::dom::Node >  const&, local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::Node > removeChild(local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::Node > appendChild(local_ref< org::w3c::dom::Node >  const&);
		jboolean hasChildNodes();
		local_ref< org::w3c::dom::Node > cloneNode(jboolean);
		void normalize();
		jboolean isSupported(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getNamespaceURI();
		local_ref< java::lang::String > getPrefix();
		void setPrefix(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getLocalName();
		jboolean hasAttributes();
		local_ref< java::lang::String > getBaseURI();
		jshort compareDocumentPosition(local_ref< org::w3c::dom::Node >  const&);
		local_ref< java::lang::String > getTextContent();
		void setTextContent(local_ref< java::lang::String >  const&);
		jboolean isSameNode(local_ref< org::w3c::dom::Node >  const&);
		local_ref< java::lang::String > lookupPrefix(local_ref< java::lang::String >  const&);
		jboolean isDefaultNamespace(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > lookupNamespaceURI(local_ref< java::lang::String >  const&);
		jboolean isEqualNode(local_ref< org::w3c::dom::Node >  const&);
		local_ref< java::lang::Object > getFeature(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > setUserData(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< org::w3c::dom::UserDataHandler >  const&);
		local_ref< java::lang::Object > getUserData(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jshort > ELEMENT_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jshort > ATTRIBUTE_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jshort > TEXT_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jshort > CDATA_SECTION_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jshort > ENTITY_REFERENCE_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jshort > ENTITY_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jshort > PROCESSING_INSTRUCTION_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jshort > COMMENT_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jshort > DOCUMENT_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jshort > DOCUMENT_TYPE_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jshort > DOCUMENT_FRAGMENT_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jshort > NOTATION_NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jshort > DOCUMENT_POSITION_DISCONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jshort > DOCUMENT_POSITION_PRECEDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jshort > DOCUMENT_POSITION_FOLLOWING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jshort > DOCUMENT_POSITION_CONTAINS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jshort > DOCUMENT_POSITION_CONTAINED_BY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jshort > DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC;
	}; //class Node

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NODE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NODE_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_NODE_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Node::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Node::getNodeName()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Node::getNodeValue()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::Node::setNodeValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(2),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jshort org::w3c::dom::Node::getNodeType()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(3),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(3), 
		jshort
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::getParentNode()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(4),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject());
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Node::getChildNodes()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(5),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::NodeList >
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::getFirstChild()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(6),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::getLastChild()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(7),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::getPreviousSibling()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(8),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::getNextSibling()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(9),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject());
}

local_ref< org::w3c::dom::NamedNodeMap > org::w3c::dom::Node::getAttributes()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(10),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::w3c::dom::NamedNodeMap >
	>(get_jobject());
}

local_ref< org::w3c::dom::Document > org::w3c::dom::Node::getOwnerDocument()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(11),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::insertBefore(local_ref< org::w3c::dom::Node > const &a0, local_ref< org::w3c::dom::Node > const &a1)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(12),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::replaceChild(local_ref< org::w3c::dom::Node > const &a0, local_ref< org::w3c::dom::Node > const &a1)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(13),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::removeChild(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(14),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::appendChild(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(15),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0);
}

jboolean org::w3c::dom::Node::hasChildNodes()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(16),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Node::cloneNode(jboolean a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(17),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< org::w3c::dom::Node >
	>(get_jobject(), a0);
}

void org::w3c::dom::Node::normalize()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(18),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject());
}

jboolean org::w3c::dom::Node::isSupported(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(19),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::w3c::dom::Node::getNamespaceURI()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(20),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Node::getPrefix()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(21),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::Node::setPrefix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(22),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Node::getLocalName()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(23),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean org::w3c::dom::Node::hasAttributes()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(24),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Node::getBaseURI()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(25),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jshort org::w3c::dom::Node::compareDocumentPosition(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(26),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(26), 
		jshort
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Node::getTextContent()
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(27),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::w3c::dom::Node::setTextContent(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(28),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0);
}

jboolean org::w3c::dom::Node::isSameNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(29),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Node::lookupPrefix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(30),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jboolean org::w3c::dom::Node::isDefaultNamespace(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(31),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(31), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Node::lookupNamespaceURI(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(32),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jboolean org::w3c::dom::Node::isEqualNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(33),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(33), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::w3c::dom::Node::getFeature(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(34),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::w3c::dom::Node::setUserData(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< org::w3c::dom::UserDataHandler > const &a2)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(35),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > org::w3c::dom::Node::getUserData(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Node::J2CPP_CLASS_NAME,
		org::w3c::dom::Node::J2CPP_METHOD_NAME(36),
		org::w3c::dom::Node::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(0),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(0),
	jshort
> org::w3c::dom::Node::ELEMENT_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(1),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(1),
	jshort
> org::w3c::dom::Node::ATTRIBUTE_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(2),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(2),
	jshort
> org::w3c::dom::Node::TEXT_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(3),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(3),
	jshort
> org::w3c::dom::Node::CDATA_SECTION_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(4),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(4),
	jshort
> org::w3c::dom::Node::ENTITY_REFERENCE_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(5),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(5),
	jshort
> org::w3c::dom::Node::ENTITY_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(6),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(6),
	jshort
> org::w3c::dom::Node::PROCESSING_INSTRUCTION_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(7),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(7),
	jshort
> org::w3c::dom::Node::COMMENT_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(8),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(8),
	jshort
> org::w3c::dom::Node::DOCUMENT_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(9),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(9),
	jshort
> org::w3c::dom::Node::DOCUMENT_TYPE_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(10),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(10),
	jshort
> org::w3c::dom::Node::DOCUMENT_FRAGMENT_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(11),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(11),
	jshort
> org::w3c::dom::Node::NOTATION_NODE;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(12),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(12),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_DISCONNECTED;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(13),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(13),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_PRECEDING;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(14),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(14),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_FOLLOWING;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(15),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(15),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_CONTAINS;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(16),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(16),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_CONTAINED_BY;

static_field<
	org::w3c::dom::Node::J2CPP_CLASS_NAME,
	org::w3c::dom::Node::J2CPP_FIELD_NAME(17),
	org::w3c::dom::Node::J2CPP_FIELD_SIGNATURE(17),
	jshort
> org::w3c::dom::Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC;


J2CPP_DEFINE_CLASS(org::w3c::dom::Node,"org/w3c/dom/Node")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,0,"getNodeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,1,"getNodeValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,2,"setNodeValue","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,3,"getNodeType","()S")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,4,"getParentNode","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,5,"getChildNodes","()Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,6,"getFirstChild","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,7,"getLastChild","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,8,"getPreviousSibling","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,9,"getNextSibling","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,10,"getAttributes","()Lorg/w3c/dom/NamedNodeMap;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,11,"getOwnerDocument","()Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,12,"insertBefore","(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,13,"replaceChild","(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,14,"removeChild","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,15,"appendChild","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,16,"hasChildNodes","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,17,"cloneNode","(Z)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,18,"normalize","()V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,19,"isSupported","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,20,"getNamespaceURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,21,"getPrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,22,"setPrefix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,23,"getLocalName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,24,"hasAttributes","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,25,"getBaseURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,26,"compareDocumentPosition","(Lorg/w3c/dom/Node;)S")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,27,"getTextContent","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,28,"setTextContent","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,29,"isSameNode","(Lorg/w3c/dom/Node;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,30,"lookupPrefix","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,31,"isDefaultNamespace","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,32,"lookupNamespaceURI","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,33,"isEqualNode","(Lorg/w3c/dom/Node;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,34,"getFeature","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,35,"setUserData","(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Node,36,"getUserData","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,0,"ELEMENT_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,1,"ATTRIBUTE_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,2,"TEXT_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,3,"CDATA_SECTION_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,4,"ENTITY_REFERENCE_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,5,"ENTITY_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,6,"PROCESSING_INSTRUCTION_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,7,"COMMENT_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,8,"DOCUMENT_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,9,"DOCUMENT_TYPE_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,10,"DOCUMENT_FRAGMENT_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,11,"NOTATION_NODE","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,12,"DOCUMENT_POSITION_DISCONNECTED","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,13,"DOCUMENT_POSITION_PRECEDING","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,14,"DOCUMENT_POSITION_FOLLOWING","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,15,"DOCUMENT_POSITION_CONTAINS","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,16,"DOCUMENT_POSITION_CONTAINED_BY","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::Node,17,"DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC","S")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NODE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
