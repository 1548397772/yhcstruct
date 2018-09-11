//
//  YCConfig.h
//  yhcProjectStruct
//
//  Created by BJyhc on 2018/9/11.
//  Copyright © 2018年 blue@circle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*
 * 友盟、微博、QQ、微信、回调地址配置
 */
UIKIT_EXTERN NSString *const UMengAppKey;           // 友盟key
UIKIT_EXTERN NSString *const WeiBoAppKey;           // 新浪微博key
UIKIT_EXTERN NSString *const WeiBoAppSecretKey;     // 新浪微博appSecret
UIKIT_EXTERN NSString *const WeixinAppKey;          // 微信id
UIKIT_EXTERN NSString *const WeixinKeySecretKey;    // 微信appSecret
//#error 注意在info.plist URL Schemes QQAPPKey转16进制
UIKIT_EXTERN NSString *const QQAppKey;              // QQKey
UIKIT_EXTERN NSString *const QQKeySecretKey;        // QQKey

//#error 用于自动提示软件更新功能，根据客户需求配置，请注意更改此ID
UIKIT_EXTERN const NSUInteger AppStoreID;            // App ID

UIKIT_EXTERN NSString *const CallBackURL;           // 授权回调地址

/*
 * 极光推送
 */
UIKIT_EXTERN NSString *const JPushID;               // JPush ID

/*
 * Bugly
 */
//#error 移动云商城官方上架版本才配置，其余标品请隐去或删除
UIKIT_EXTERN NSString *const BuglyID;               // Bugle ID

/*
 * 美恰客服
 */
#define MCAppKey @"5cf63206f38d7cbb473572cc39a47268"

/**
 *  APP 配置
 */
UIKIT_EXTERN NSString *const AppScheme;             // 自定义应用程序名
UIKIT_EXTERN NSString *const AppiTunesConnectURL;   // 苹果商店地址

/*
 * 首页配置
 */
UIKIT_EXTERN const CGFloat KFavoriteTableHeight;       // 猜你喜欢Cell高度

/*
 * 分类配置
 */
UIKIT_EXTERN const CGFloat KSubCategoryCellHeight;  //  二级分类Cell高度
UIKIT_EXTERN const CGFloat KSearchTypeViewHeight;   //  搜索框高度

/*
 * 购物车配置
 */
UIKIT_EXTERN const CGFloat KCartBoxCellHeight;     //  购物车高度

/*
 * 分享配置
 */
UIKIT_EXTERN NSString *const OfficialURL;              //  官网地址
UIKIT_EXTERN NSString *const ShareDetail;              //  分享内容

/*
 * 关于我们配置
 */
UIKIT_EXTERN NSString *const AbouticonImageName;       // 项目Logo图片
UIKIT_EXTERN NSString *const AboutQRcodeImageName;     // 项目二维码图片
UIKIT_EXTERN NSString *const AboutCopyrightTitle;      // 项目版权标题
UIKIT_EXTERN NSString *const AboutCopyrightDetail;     // 项目版权详情

UIKIT_EXTERN NSString *const LaunchImageName;          // 启动图
/**
 *  @brief 域名
 */
UIKIT_EXTERN NSString *const GHOSTURL;


