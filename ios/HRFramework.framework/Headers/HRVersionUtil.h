//
//  HRVersionUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2018/5/17.
//  Copyright © 2018年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 版本工具类
 */
@interface HRVersionUtil : NSObject

/**
 获取App版本

 @param appId AppId
 @param success <#success description#>
 */
+ (void)getAppVersionWithAppId:(NSString *)appId success:(void (^)(BOOL isUpdated, NSString *version, NSString *releaseNotes, NSString *trackViewUrl))success;

/**
 显示更新提示（强制更新）

 @param version 新版本号
 @param releaseNotes 更新说明
 @param trackViewUrl 查看网址
 */
+ (void)showUpdateTipsWithVersion:(NSString *)version releaseNotes:(NSString *)releaseNotes trackViewUrl:(NSString *)trackViewUrl;

/**
 显示更新提示

 @param version 新版本号
 @param releaseNotes 更新说明
 @param trackViewUrl 查看网址
 @param updatedBlock 立即更新 Block
 */
+ (void)showUpdateTipsWithVersion:(NSString *)version releaseNotes:(NSString *)releaseNotes trackViewUrl:(NSString *)trackViewUrl updatedBlock:(void (^)(void))updatedBlock;

/**
 显示更新提示

 @param version 新版本号
 @param releaseNotes 更新说明
 @param trackViewUrl 查看网址
 @param versionTextColor 新版本号文本颜色
 @param updatedButtonTextColor 立即更新按钮文本颜色
 @param updatedButtonBgColor 立即更新按钮背景颜色
 @param updatedBlock 立即更新 Block
 */
+ (void)showUpdateTipsWithVersion:(NSString *)version releaseNotes:(NSString *)releaseNotes trackViewUrl:(NSString *)trackViewUrl versionTextColor:(UIColor *)versionTextColor updatedButtonTextColor:(UIColor *)updatedButtonTextColor updatedButtonBgColor:(UIColor *)updatedButtonBgColor updatedBlock:(void (^)(void))updatedBlock;

@end
