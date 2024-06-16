// Generated by Haxe 4.3.4
#ifndef INCLUDED_lime_text_GlyphMetrics
#define INCLUDED_lime_text_GlyphMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_64e3d4d6ee91dfdb_16_new)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)

namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES GlyphMetrics_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlyphMetrics_obj OBJ_;
		GlyphMetrics_obj();

	public:
		enum { _hx_ClassId = 0x3982cf59 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.text.GlyphMetrics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.text.GlyphMetrics"); }

		inline static ::hx::ObjectPtr< GlyphMetrics_obj > __new() {
			::hx::ObjectPtr< GlyphMetrics_obj > __this = new GlyphMetrics_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlyphMetrics_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlyphMetrics_obj *__this = (GlyphMetrics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlyphMetrics_obj), true, "lime.text.GlyphMetrics"));
			*(void **)__this = GlyphMetrics_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_64e3d4d6ee91dfdb_16_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlyphMetrics_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlyphMetrics",17,66,61,fd); }

		 ::lime::math::Vector2 advance;
		int height;
		 ::lime::math::Vector2 horizontalBearing;
		 ::lime::math::Vector2 verticalBearing;
};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_GlyphMetrics */ 
