// Generated by Haxe 4.3.4
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8
#define INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4c7657ea6f006b0a_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_rgb8_rgba8)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_rgb8_rgba8_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_rgb8_rgba8_obj OBJ_;
		OES_rgb8_rgba8_obj();

	public:
		enum { _hx_ClassId = 0x42ddb87c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_rgb8_rgba8")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_rgb8_rgba8"); }

		inline static ::hx::ObjectPtr< OES_rgb8_rgba8_obj > __new() {
			::hx::ObjectPtr< OES_rgb8_rgba8_obj > __this = new OES_rgb8_rgba8_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_rgb8_rgba8_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_rgb8_rgba8_obj *__this = (OES_rgb8_rgba8_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_rgb8_rgba8_obj), false, "lime.graphics.opengl.ext.OES_rgb8_rgba8"));
			*(void **)__this = OES_rgb8_rgba8_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4c7657ea6f006b0a_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::OES_rgb8_rgba8)(__this) )->RGBA8_OES = 32856;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::OES_rgb8_rgba8)(__this) )->RGB8_OES = 32849;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_rgb8_rgba8_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_rgb8_rgba8",d2,44,3a,66); }

		int RGB8_OES;
		int RGBA8_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8 */ 
