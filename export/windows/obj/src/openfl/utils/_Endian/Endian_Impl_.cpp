// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_66_fromLimeEndian,"openfl.utils._Endian.Endian_Impl_","fromLimeEndian",0x810f0bde,"openfl.utils._Endian.Endian_Impl_.fromLimeEndian","openfl/utils/Endian.hx",66,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_77_fromString,"openfl.utils._Endian.Endian_Impl_","fromString",0x910e541f,"openfl.utils._Endian.Endian_Impl_.fromString","openfl/utils/Endian.hx",77,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_88_toLimeEndian,"openfl.utils._Endian.Endian_Impl_","toLimeEndian",0x6c00922f,"openfl.utils._Endian.Endian_Impl_.toLimeEndian","openfl/utils/Endian.hx",88,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_99_toString,"openfl.utils._Endian.Endian_Impl_","toString",0x9a281df0,"openfl.utils._Endian.Endian_Impl_.toString","openfl/utils/Endian.hx",99,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_42_boot,"openfl.utils._Endian.Endian_Impl_","boot",0x6ccbdf76,"openfl.utils._Endian.Endian_Impl_.boot","openfl/utils/Endian.hx",42,0xb1ee6086)
HX_LOCAL_STACK_FRAME(_hx_pos_f2873c031a8a146e_61_boot,"openfl.utils._Endian.Endian_Impl_","boot",0x6ccbdf76,"openfl.utils._Endian.Endian_Impl_.boot","openfl/utils/Endian.hx",61,0xb1ee6086)
namespace openfl{
namespace utils{
namespace _Endian{

void Endian_Impl__obj::__construct() { }

Dynamic Endian_Impl__obj::__CreateEmpty() { return new Endian_Impl__obj; }

void *Endian_Impl__obj::_hx_vtable = 0;

Dynamic Endian_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Endian_Impl__obj > _hx_result = new Endian_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Endian_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60d4f874;
}

 ::Dynamic Endian_Impl__obj::_hx_BIG_ENDIAN;

 ::Dynamic Endian_Impl__obj::_hx_LITTLE_ENDIAN;

 ::Dynamic Endian_Impl__obj::fromLimeEndian( ::lime::_hx_system::Endian value){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_66_fromLimeEndian)
HXDLIN(  66)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE(  69)				return 1;
            			}
            			break;
            			case (int)1: {
HXLINE(  68)				return 0;
            			}
            			break;
            		}
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,fromLimeEndian,return )

 ::Dynamic Endian_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_77_fromString)
HXDLIN(  77)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bigEndian",7b,d5,5a,20)) ){
HXLINE(  79)			return 0;
HXDLIN(  79)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("littleEndian",31,2e,7b,07)) ){
HXLINE(  80)			return 1;
HXDLIN(  80)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  81)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,fromString,return )

 ::lime::_hx_system::Endian Endian_Impl__obj::toLimeEndian( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_88_toLimeEndian)
HXDLIN(  88)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  90)			return ::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn();
HXDLIN(  90)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  91)			return ::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn();
HXDLIN(  91)			goto _hx_goto_3;
            		}
            		/* default */{
HXLINE(  92)			return null();
            		}
            		_hx_goto_3:;
HXLINE(  88)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,toLimeEndian,return )

::String Endian_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_99_toString)
HXDLIN(  99)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE( 101)			return HX_("bigEndian",7b,d5,5a,20);
HXDLIN( 101)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 102)			return HX_("littleEndian",31,2e,7b,07);
HXDLIN( 102)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE( 103)			return null();
            		}
            		_hx_goto_5:;
HXLINE(  99)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,toString,return )


Endian_Impl__obj::Endian_Impl__obj()
{
}

bool Endian_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toLimeEndian") ) { outValue = toLimeEndian_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromLimeEndian") ) { outValue = fromLimeEndian_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Endian_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Endian_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Endian_Impl__obj::_hx_BIG_ENDIAN,HX_("BIG_ENDIAN",9a,d5,89,b2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Endian_Impl__obj::_hx_LITTLE_ENDIAN,HX_("LITTLE_ENDIAN",04,50,ec,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Endian_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_hx_BIG_ENDIAN,"BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_hx_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Endian_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_hx_BIG_ENDIAN,"BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_hx_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#endif

::hx::Class Endian_Impl__obj::__mClass;

static ::String Endian_Impl__obj_sStaticFields[] = {
	HX_("BIG_ENDIAN",9a,d5,89,b2),
	HX_("LITTLE_ENDIAN",04,50,ec,fb),
	HX_("fromLimeEndian",9a,73,2a,8e),
	HX_("fromString",db,2d,74,54),
	HX_("toLimeEndian",eb,52,dd,37),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Endian_Impl__obj::__register()
{
	Endian_Impl__obj _hx_dummy;
	Endian_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Endian.Endian_Impl_",aa,cb,09,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Endian_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Endian_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Endian_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Endian_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Endian_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Endian_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Endian_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Endian_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_42_boot)
HXDLIN(  42)		_hx_BIG_ENDIAN = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f2873c031a8a146e_61_boot)
HXDLIN(  61)		_hx_LITTLE_ENDIAN = 1;
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Endian
