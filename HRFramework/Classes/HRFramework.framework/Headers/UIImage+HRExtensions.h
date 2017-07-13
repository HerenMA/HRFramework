//
//  UIImage+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 UIImage 分类
 */
@interface UIImage (HRExtensions)

#pragma mark - 读取 Bundle 中的图片
/**
 获取默认 Bundle 中图片
 
 @param imagePathAndName 图片相对路径与名称
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundleOfImagePathAndName:(NSString *)imagePathAndName;

/**
 获取默认 Bundle 中图片

 @param imagePathAndName 图片相对路径与名称
 @param resizable 是否拉升
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundleOfImagePathAndName:(NSString *)imagePathAndName resizable:(BOOL)resizable;

/**
 获取默认 Bundle 中图片
 
 @param imagePathAndName 图片相对路径与名称
 @param disabledCache 禁用缓存
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundleOfImagePathAndName:(NSString *)imagePathAndName disabledCache:(BOOL)disabledCache;

/**
 获取默认 Bundle 中图片

 @param imagePathAndName 图片相对路径与名称
 @param resizable 是否拉升
 @param disabledCache 禁用缓存
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundleOfImagePathAndName:(NSString *)imagePathAndName resizable:(BOOL)resizable disabledCache:(BOOL)disabledCache;

/**
 获取指定 Bundle 中图片
 
 @param bundleName Bundle 名称
 @param imagePathAndName 图片相对路径与名称
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundle:(NSString *)bundleName imagePathAndName:(NSString *)imagePathAndName;

/**
 获取指定 Bundle 中图片

 @param bundleName Bundle 名称
 @param imagePathAndName 图片相对路径与名称
 @param resizable 是否拉升
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundle:(NSString *)bundleName imagePathAndName:(NSString *)imagePathAndName resizable:(BOOL)resizable;

/**
 获取指定 Bundle 中图片
 
 @param bundleName Bundle 名称
 @param imagePathAndName 图片相对路径与名称
 @param disabledCache 禁用缓存
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundle:(NSString *)bundleName imagePathAndName:(NSString *)imagePathAndName disabledCache:(BOOL)disabledCache;

/**
 获取指定 Bundle 中图片

 @param bundleName Bundle 名称
 @param imagePathAndName 图片相对路径与名称
 @param resizable 是否中心点拉升
 @param disabledCache 禁用缓存
 @return <#return value description#>
 */
+ (UIImage *)imageWithBundle:(NSString *)bundleName imagePathAndName:(NSString *)imagePathAndName resizable:(BOOL)resizable disabledCache:(BOOL)disabledCache;

#pragma mark - 缩放
/**
 等比例缩放
 
 @param zoomSize 缩放目标大小
 @return <#return value description#>
 */
- (UIImage *)ratioZoomWithSize:(CGSize)zoomSize;

/**
 压缩图片并转换成二进制数据
 
 @param compressionQuality 图片质量(0.0 ~ 1.0)
 @return <#return value description#>
 */
- (NSData *)compressedWithQuality:(CGFloat)compressionQuality;


#pragma mark - 颜色生成图片
/**
 创建指定颜色图片
 
 @param color 颜色
 @param size 图片大小
 @return <#return value description#>
 */
+ (UIImage *)createImageWithColor:(UIColor *)color size:(CGSize)size;

@end
