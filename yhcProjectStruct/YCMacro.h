//
//  YCMacro.h
//  yhcProjectStruct
//
//  Created by BJyhc on 2018/9/11.
//  Copyright © 2018年 blue@circle. All rights reserved.
//

#ifndef YCMacro_h
#define YCMacro_h

/**
 *  存储
 */
#define GVUserSessionId [GVUserDefaults standardUserDefaults].sessionId
#define GVUserGradeId   [GVUserDefaults standardUserDefaults].gradeId

/**
 *  颜色
 */
#pragma mark - 颜色转换
//tabBar
#define tabBarColor           UIColorFromRGB(0x6d9e05)  // tabbar颜色
#define BJNavigationBarColor  RGBCOLOR(110,157,31)  //bj导航栏绿色
#define UIOrangeColor         UIColorFromRGB(0xff6600)  // 首页导航栏橙色
#define UIDefaultColor        UIColorFromRGB(0xf5f5f5)  //
#define UIRecommendColor      UIColorFromRGB(0x4C9D2F)  // 首页精挑细选Section标题栏背景色
#define UIHotSaleSectionColor UIColorFromRGB(0xff5454)  // 首页热卖商品Section标题栏背景色
#define UIOrderRedColor       UIColorFromRGB(0xE51D2B)  // 订单状态红
#define UICellRedColor        UIColorFromRGB(0xff5722)  // Cell主色
#define StatusBarColor        UIColorFromRGB(0x679800)  // 状态栏颜色

/**
 *  跳转规则
 */
#define PageHome              @"page:Home"
#define PageCategory          @"page:Category"
#define PageShoppingCart      @"page:ShoppingCart"
#define PageOrderCenter       @"page:OrderCenter"
#define PageOrderList         @"page:OrderList"
#define PageFightGroupList    @"page:FightGroupList"
#define PageMyFightGroups     @"page:MyFightGroups"
#define PageShake             @"page:Shake"
#define PageProductDetail     @"page:ProductDetails"

#define WebShowCategory       @"webShowCategory"
#define WebShowMerberCenter   @"webShowMerberCenter"
#define WebShowProductList    @"webShowProductList"
#define WebShowFightGroupList @"webShowFightGroupList"
#define WebShowShake          @"webShowShake"
#define WebShowProduct        @"webShowProduct"
#define WebShowOrderList      @"webShowOrderList"

#define CountDownProducts     @"CountDownProducts"
#define GroupBuyList          @"GroupBuyList"
#define PointMall             @"PointMall"
#define BrandDetail           @"BrandDetail"
#define BrandList             @"BrandList"
#define couponslist           @"couponslist"

// UIColor 16进制颜色转换
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// 首页商品列表尺寸
#define KReMaiShangPinCellHeight (self.view.width-30)/2*237/171 + 15  //0.7倍的关系
// 分类一级列表高度
#define KCategoryCellHeight self.view.width/4

#pragma mark - Frame(宏 x,y,width,height)
// 屏幕尺寸宽
#define ScreenWidth  [UIScreen mainScreen].bounds.size.width
// 屏幕尺寸高
#define ScreenHeight  [UIScreen mainScreen].bounds.size.height
// 获取 KeyWindow
#define KEYWINDOW [UIApplication sharedApplication].keyWindow
// 获取屏幕分辨率
#define MainScreenScale [[UIScreen mainScreen] scale] //屏幕的分辨率 当结果为1时，显示的是普通屏幕，结果为2时，显示的是Retian屏幕

//除去信号区的屏幕的frame
#define App_Frame_Width  [[UIScreen mainScreen] applicationFrame].size.width

// 判断屏幕尺寸
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

// 获取 Document 文件路径
#define DOCUMENT_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

// 删除路径文件
#define DELETE_FILE(FILEPATH) { if ([[NSFileManager defaultManager] fileExistsAtPath:FILEPATH]) {[[NSFileManager defaultManager] removeItemAtPath:FILEPATH error:nil];}}


#pragma mark - 多线程
// GCD多线程
#define kGlobalQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

#pragma mark - 判断 iOS 系统
//  判断iOS系统
#define IOS7  ( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define IOS8  ( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#pragma mark - 判断空值
//判断空数组
#define ISNULLARRAY(arr) (arr == nil || (NSObject *)arr == [NSNull null] || arr.count == 0)
// 判断空值
#define ISNULL(obj)      (obj == nil || (NSObject *)obj == [NSNull null])
//判断空字符串
#define ISNULLSTR(str)   (str == nil || (NSObject *)str == [NSNull null] || str.length == 0)

#pragma mark - 打电话
// 打电话
#define TakePhone(PhoneNumber) [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[NSString stringWithFormat:@"telprompt://%@",PhoneNumber]]]

#pragma mark - Debug
//  Debug
#ifdef DEBUG
#define NSDebugLog(...)    NSLog(__VA_ARGS__)
#define NSDebugMethod()    NSLog(@"%s", __func__)
#define NSDebugError()     NSLog(@"Error at %s Line:%d", __func__, __LINE__)
#else
#define debugLog(...)
#define debugMethod()
#define debugError()
#endif


#define IS_STR_NIL(objStr) (![objStr isKindOfClass:[NSString class]] || objStr == nil || [objStr length] <= 0 || [objStr isEqualToString:@"<null>"] ||[objStr isEqualToString:@"(null)"])
#define IS_DICT_NIL(objDict) (![objDict isKindOfClass:[NSDictionary class]] || objDict == nil || [objDict count] <= 0)
#define IS_ARRAY_NIL(objArray) (![objArray isKindOfClass:[NSArray class]] || objArray == nil || [objArray count] <= 0)
#define IS_NUM_NIL(objNum) (![objNum isKindOfClass:[NSNumber class]] || objNum == nil)
#define IS_DATA_NIL(objData) (![objData isKindOfClass:[NSData class]] || objData == nil || [objData length] <= 0)


#define Font12 [UIFont systemFontOfSize:12]
#define FontBold11 [UIFont boldSystemFontOfSize:11]



#define isIphone4 [UIScreen mainScreen].bounds.size.height == 480
#define isIphone5 [UIScreen mainScreen].bounds.size.height == 568
#define isIphone6 [UIScreen mainScreen].bounds.size.height == 667
#define isIphone6p [UIScreen mainScreen].bounds.size.height == 736
#define isIphoneX [UIScreen mainScreen].bounds.size.height == 812
#define SafeAreaTopHeight ([UIScreen mainScreen].bounds.size.height == 812.0 ? 88 : 64)
#define SafeAreaBottomHeight ([UIScreen mainScreen].bounds.size.height == 812.0 ? 34 : 0)

#ifndef    weakify
#if __has_feature(objc_arc)

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#else

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __block __typeof__(x) __block_##x##__ = x; \
_Pragma("clang diagnostic pop")

#endif
#endif

#ifndef    strongify
#if __has_feature(objc_arc)

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __weak_##x##__; \
_Pragma("clang diagnostic pop")

#else

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __block_##x##__; \
_Pragma("clang diagnostic pop")

#endif
#endif


#endif /* YCMacro_h */
