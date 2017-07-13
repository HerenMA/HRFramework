//
//  HRSkinManager.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/10.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 皮肤管理
 */
@interface HRSkinManager : NSObject

/**
 单例

 @return <#return value description#>
 */
+ (instancetype)sharedManager;


#pragma mark - 加载
/**
 加载默认 Bundle 中的颜色配置
 */
- (void)loadDefaultColor;

/**
 加载指定 Bundle 中的颜色配置

 @param bundleName Bundle 名称
 */
- (void)loadDefaultColorWithBundle:(NSString *)bundleName;


#pragma mark - 获取
/**
 获取指定颜色

 @param keyName 键值名称
 @return <#return value description#>
 */
- (UIColor *)colorWithKeyName:(NSString *)keyName;

@end
