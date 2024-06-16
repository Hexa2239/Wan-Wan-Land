// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_SysTools
#include <haxe/SysTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_310dc4d0536dca58_18_quoteUnixArg,"haxe.SysTools","quoteUnixArg",0xb3a0810a,"haxe.SysTools.quoteUnixArg","C:\\HaxeToolkit\\haxe\\std/haxe/SysTools.hx",18,0x06565cc0)
HX_LOCAL_STACK_FRAME(_hx_pos_310dc4d0536dca58_46_quoteWinArg,"haxe.SysTools","quoteWinArg",0x08e9f6be,"haxe.SysTools.quoteWinArg","C:\\HaxeToolkit\\haxe\\std/haxe/SysTools.hx",46,0x06565cc0)
static const ::String _hx_array_data_42269736_5[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_42269736_6[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_42269736_7[] = {
	HX_("\\",5c,00,00,00),
};
static const ::String _hx_array_data_42269736_8[] = {
	HX_("\"",22,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_310dc4d0536dca58_9_boot,"haxe.SysTools","boot",0x6c65b86a,"haxe.SysTools.boot","C:\\HaxeToolkit\\haxe\\std/haxe/SysTools.hx",9,0x06565cc0)
static const int _hx_array_data_42269736_10[] = {
	(int)32,(int)40,(int)41,(int)37,(int)33,(int)94,(int)34,(int)60,(int)62,(int)38,(int)124,(int)10,(int)13,(int)44,(int)59,
};
namespace haxe{

void SysTools_obj::__construct() { }

Dynamic SysTools_obj::__CreateEmpty() { return new SysTools_obj; }

void *SysTools_obj::_hx_vtable = 0;

Dynamic SysTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysTools_obj > _hx_result = new SysTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SysTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40b83714;
}

::Array< int > SysTools_obj::winMetaCharacters;

::String SysTools_obj::quoteUnixArg(::String argument){
            	HX_GC_STACKFRAME(&_hx_pos_310dc4d0536dca58_18_quoteUnixArg)
HXLINE(  22)		if ((argument == HX_("",00,00,00,00))) {
HXLINE(  23)			return HX_("''",20,22,00,00);
            		}
HXLINE(  25)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9_@%+=:,./-]",80,28,a0,8d),HX_("",00,00,00,00))->match(argument))) {
HXLINE(  26)			return argument;
            		}
HXLINE(  30)		return ((HX_("'",27,00,00,00) + ::StringTools_obj::replace(argument,HX_("'",27,00,00,00),HX_("'\"'\"'",71,96,37,8b))) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysTools_obj,quoteUnixArg,return )

::String SysTools_obj::quoteWinArg(::String argument,bool escapeMetaCharacters){
            	HX_GC_STACKFRAME(&_hx_pos_310dc4d0536dca58_46_quoteWinArg)
HXLINE(  48)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^(/)?[^ \t/\\\\\"]+$",3c,0f,01,c9),HX_("",00,00,00,00))->match(argument))) {
HXLINE(  52)			 ::StringBuf result =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  53)			bool needquote;
HXDLIN(  53)			bool needquote1;
HXDLIN(  53)			bool needquote2;
HXDLIN(  53)			if ((argument.indexOf(HX_(" ",20,00,00,00),null()) == -1)) {
HXLINE(  53)				needquote2 = (argument.indexOf(HX_("\t",09,00,00,00),null()) != -1);
            			}
            			else {
HXLINE(  53)				needquote2 = true;
            			}
HXDLIN(  53)			if (!(needquote2)) {
HXLINE(  53)				needquote1 = (argument == HX_("",00,00,00,00));
            			}
            			else {
HXLINE(  53)				needquote1 = true;
            			}
HXDLIN(  53)			if (!(needquote1)) {
HXLINE(  53)				needquote = (argument.indexOf(HX_("/",2f,00,00,00),null()) > 0);
            			}
            			else {
HXLINE(  53)				needquote = true;
            			}
HXLINE(  55)			if (needquote) {
HXLINE(  56)				if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  56)					result->flush();
            				}
HXDLIN(  56)				if (::hx::IsNull( result->b )) {
HXLINE(  56)					result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_5,1);
            				}
            				else {
HXLINE(  56)					result->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE(  58)			 ::StringBuf bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  59)			{
HXLINE(  59)				int _g = 0;
HXDLIN(  59)				int _g1 = argument.length;
HXDLIN(  59)				while((_g < _g1)){
HXLINE(  59)					_g = (_g + 1);
HXDLIN(  59)					int i = (_g - 1);
HXLINE(  60)					{
HXLINE(  60)						 ::Dynamic _g2 = argument.charCodeAt(i);
HXDLIN(  60)						if (::hx::IsNull( _g2 )) {
HXLINE(  71)							 ::Dynamic c = _g2;
HXDLIN(  71)							{
HXLINE(  73)								if ((bs_buf->get_length() > 0)) {
HXLINE(  74)									{
HXLINE(  74)										::String x = bs_buf->toString();
HXDLIN(  74)										if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  74)											result->flush();
            										}
HXDLIN(  74)										if (::hx::IsNull( result->b )) {
HXLINE(  74)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE(  74)											::Array< ::String > result1 = result->b;
HXDLIN(  74)											result1->push(::Std_obj::string(x));
            										}
            									}
HXLINE(  75)									bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            								}
HXLINE(  77)								{
HXLINE(  77)									int c1 = ( (int)(c) );
HXDLIN(  77)									if ((c1 >= 127)) {
HXLINE(  77)										::String x1 = ::String::fromCharCode(c1);
HXDLIN(  77)										if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  77)											result->flush();
            										}
HXDLIN(  77)										if (::hx::IsNull( result->b )) {
HXLINE(  77)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            										}
            										else {
HXLINE(  77)											::Array< ::String > result2 = result->b;
HXDLIN(  77)											result2->push(::Std_obj::string(x1));
            										}
            									}
            									else {
HXLINE(  77)										if (::hx::IsNull( result->charBuf )) {
HXLINE(  77)											result->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN(  77)										result->charBuf->push(c1);
            									}
            								}
            							}
            						}
            						else {
HXLINE(  60)							 ::Dynamic _hx_switch_0 = _g2;
            							if (  (_hx_switch_0==34) ){
HXLINE(  66)								::String bs = bs_buf->toString();
HXLINE(  67)								{
HXLINE(  67)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  67)										result->flush();
            									}
HXDLIN(  67)									if (::hx::IsNull( result->b )) {
HXLINE(  67)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE(  67)										::Array< ::String > result3 = result->b;
HXDLIN(  67)										result3->push(::Std_obj::string(bs));
            									}
            								}
HXLINE(  68)								{
HXLINE(  68)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  68)										result->flush();
            									}
HXDLIN(  68)									if (::hx::IsNull( result->b )) {
HXLINE(  68)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE(  68)										::Array< ::String > result4 = result->b;
HXDLIN(  68)										result4->push(::Std_obj::string(bs));
            									}
            								}
HXLINE(  69)								bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  70)								{
HXLINE(  70)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  70)										result->flush();
            									}
HXDLIN(  70)									if (::hx::IsNull( result->b )) {
HXLINE(  70)										result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_6,1);
            									}
            									else {
HXLINE(  70)										result->b->push(HX_("\\\"",46,50,00,00));
            									}
            								}
HXLINE(  64)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==92) ){
HXLINE(  63)								if (::hx::IsNotNull( bs_buf->charBuf )) {
HXLINE(  63)									bs_buf->flush();
            								}
HXDLIN(  63)								if (::hx::IsNull( bs_buf->b )) {
HXLINE(  63)									bs_buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_7,1);
            								}
            								else {
HXLINE(  63)									bs_buf->b->push(HX_("\\",5c,00,00,00));
            								}
HXDLIN(  63)								goto _hx_goto_2;
            							}
            							/* default */{
HXLINE(  71)								 ::Dynamic c2 = _g2;
HXDLIN(  71)								{
HXLINE(  73)									if ((bs_buf->get_length() > 0)) {
HXLINE(  74)										{
HXLINE(  74)											::String x2 = bs_buf->toString();
HXDLIN(  74)											if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  74)												result->flush();
            											}
HXDLIN(  74)											if (::hx::IsNull( result->b )) {
HXLINE(  74)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            											}
            											else {
HXLINE(  74)												::Array< ::String > result5 = result->b;
HXDLIN(  74)												result5->push(::Std_obj::string(x2));
            											}
            										}
HXLINE(  75)										bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            									}
HXLINE(  77)									{
HXLINE(  77)										int c3 = ( (int)(c2) );
HXDLIN(  77)										if ((c3 >= 127)) {
HXLINE(  77)											::String x3 = ::String::fromCharCode(c3);
HXDLIN(  77)											if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  77)												result->flush();
            											}
HXDLIN(  77)											if (::hx::IsNull( result->b )) {
HXLINE(  77)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            											}
            											else {
HXLINE(  77)												::Array< ::String > result6 = result->b;
HXDLIN(  77)												result6->push(::Std_obj::string(x3));
            											}
            										}
            										else {
HXLINE(  77)											if (::hx::IsNull( result->charBuf )) {
HXLINE(  77)												result->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN(  77)											result->charBuf->push(c3);
            										}
            									}
            								}
            							}
            							_hx_goto_2:;
            						}
            					}
            				}
            			}
HXLINE(  82)			{
HXLINE(  82)				::String x4 = bs_buf->toString();
HXDLIN(  82)				if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  82)					result->flush();
            				}
HXDLIN(  82)				if (::hx::IsNull( result->b )) {
HXLINE(  82)					result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            				}
            				else {
HXLINE(  82)					::Array< ::String > result7 = result->b;
HXDLIN(  82)					result7->push(::Std_obj::string(x4));
            				}
            			}
HXLINE(  84)			if (needquote) {
HXLINE(  85)				{
HXLINE(  85)					::String x5 = bs_buf->toString();
HXDLIN(  85)					if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  85)						result->flush();
            					}
HXDLIN(  85)					if (::hx::IsNull( result->b )) {
HXLINE(  85)						result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            					}
            					else {
HXLINE(  85)						::Array< ::String > result8 = result->b;
HXDLIN(  85)						result8->push(::Std_obj::string(x5));
            					}
            				}
HXLINE(  86)				{
HXLINE(  86)					if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  86)						result->flush();
            					}
HXDLIN(  86)					if (::hx::IsNull( result->b )) {
HXLINE(  86)						result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_8,1);
            					}
            					else {
HXLINE(  86)						result->b->push(HX_("\"",22,00,00,00));
            					}
            				}
            			}
HXLINE(  89)			argument = result->toString();
            		}
HXLINE(  92)		if (escapeMetaCharacters) {
HXLINE(  93)			 ::StringBuf result9 =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  94)			{
HXLINE(  94)				int _g3 = 0;
HXDLIN(  94)				int _g4 = argument.length;
HXDLIN(  94)				while((_g3 < _g4)){
HXLINE(  94)					_g3 = (_g3 + 1);
HXDLIN(  94)					int i1 = (_g3 - 1);
HXLINE(  95)					 ::Dynamic c4 = argument.charCodeAt(i1);
HXLINE(  96)					if ((::haxe::SysTools_obj::winMetaCharacters->indexOf(c4,null()) >= 0)) {
HXLINE(  97)						if (::hx::IsNull( result9->charBuf )) {
HXLINE(  97)							result9->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  97)						result9->charBuf->push(94);
            					}
HXLINE(  99)					{
HXLINE(  99)						int c5 = ( (int)(c4) );
HXDLIN(  99)						if ((c5 >= 127)) {
HXLINE(  99)							::String x6 = ::String::fromCharCode(c5);
HXDLIN(  99)							if (::hx::IsNotNull( result9->charBuf )) {
HXLINE(  99)								result9->flush();
            							}
HXDLIN(  99)							if (::hx::IsNull( result9->b )) {
HXLINE(  99)								result9->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            							}
            							else {
HXLINE(  99)								::Array< ::String > result10 = result9->b;
HXDLIN(  99)								result10->push(::Std_obj::string(x6));
            							}
            						}
            						else {
HXLINE(  99)							if (::hx::IsNull( result9->charBuf )) {
HXLINE(  99)								result9->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(  99)							result9->charBuf->push(c5);
            						}
            					}
            				}
            			}
HXLINE( 101)			return result9->toString();
            		}
            		else {
HXLINE( 103)			return argument;
            		}
HXLINE(  92)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SysTools_obj,quoteWinArg,return )


SysTools_obj::SysTools_obj()
{
}

bool SysTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"quoteWinArg") ) { outValue = quoteWinArg_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quoteUnixArg") ) { outValue = quoteUnixArg_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { outValue = ( winMetaCharacters ); return true; }
	}
	return false;
}

bool SysTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { winMetaCharacters=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SysTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SysTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &SysTools_obj::winMetaCharacters,HX_("winMetaCharacters",0b,65,cd,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SysTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SysTools_obj::winMetaCharacters,"winMetaCharacters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SysTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SysTools_obj::winMetaCharacters,"winMetaCharacters");
};

#endif

::hx::Class SysTools_obj::__mClass;

static ::String SysTools_obj_sStaticFields[] = {
	HX_("winMetaCharacters",0b,65,cd,94),
	HX_("quoteUnixArg",d2,54,33,00),
	HX_("quoteWinArg",f6,b3,bc,14),
	::String(null())
};

void SysTools_obj::__register()
{
	SysTools_obj _hx_dummy;
	SysTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.SysTools",36,97,26,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SysTools_obj::__GetStatic;
	__mClass->mSetStaticField = &SysTools_obj::__SetStatic;
	__mClass->mMarkFunc = SysTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SysTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SysTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SysTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SysTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_310dc4d0536dca58_9_boot)
HXDLIN(   9)		winMetaCharacters = ::Array_obj< int >::fromData( _hx_array_data_42269736_10,15);
            	}
}

} // end namespace haxe
