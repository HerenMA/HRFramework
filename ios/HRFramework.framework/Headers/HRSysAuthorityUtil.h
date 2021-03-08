//
//  HRSysAuthorityUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/11.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 系统权限工具类
 */
@interface HRSysAuthorityUtil : NSObject

/**
 检测是否开启3DTouch

 @param traitCollection <#traitCollection description#>
 @return <#return value description#>
 */
+ (BOOL)isForceTouchAvailable:(UITraitCollection *)traitCollection;

/// 检测是否允许访问相机
/// @param permission <#permission description#>
+ (void)isAllowedCamera:(void (^)(BOOL granted))permission;

/// 检测是否允许访问手机相册
/// @param permission <#permission description#>
+ (void)isAllowedPhotoAlbum:(void (^)(BOOL granted))permission;

/**
 检测是否允许使用麦克风
 
 @param permission <#permission description#>
 */
+ (void)isAllowedMicophone:(void (^)(BOOL granted))permission;

/**
 检测是否允许使用定位服务

 @return <#return value description#>
 */
+ (BOOL)isAllowedLocaiton;

/**
 检测是否允许访问手机通讯录
 
 @param completion <#completion description#>
 */
+ (void)isAllowedAddressBook:(void(^)(BOOL granted))completion;

/**
 检测是否开启通知

 @return <#return value description#>
 */
+ (BOOL)isAllowedNotification;

@end
