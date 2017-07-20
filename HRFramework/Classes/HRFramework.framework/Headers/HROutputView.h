//
//  HROutputView.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HROutputViewDelegate <NSObject>

@required

/**
 选中

 @param indexPath <#indexPath description#>
 */
- (void)didSelectedAtIndexPath:(NSIndexPath *)indexPath;

@end

typedef void(^dismissWithOperation)();

typedef NS_ENUM(NSUInteger, HROutputViewDirection) {
    /** 尖尖左 */
    HROutputViewDirectionLeft = 1,
    /** 尖尖右 */
    HROutputViewDirectionRight = 2
};


/**
 弹出菜单
 */
@interface HROutputView : UIView

///
@property (weak, nonatomic) id<HROutputViewDelegate> delegate;
///
@property (strong, nonatomic) dismissWithOperation dismissOperation;

/**
 初始化方法

 @param dataArray 模型数组
 @param origin 弹出原点
 @param width 行度
 @param height 行高
 @param direction 动画方向
 @return <#return value description#>
 */
- (instancetype)initWithDataArray:(NSArray *)dataArray origin:(CGPoint)origin width:(CGFloat)width height:(CGFloat)height direction:(HROutputViewDirection)direction;

/**
 弹出
 */
- (void)pop;

/**
 消失
 */
- (void)dismiss;

@end



/**
 数据模型
 */
@interface HROutputModel : NSObject

/// 标题
@property (strong, nonatomic) NSString *title;
/// 图片
@property (strong, nonatomic) UIImage *image;

/**
 初始化

 @param title <#title description#>
 @return <#return value description#>
 */
- (instancetype)initWithTitle:(NSString *)title;

/**
 初始化

 @param title <#title description#>
 @param image <#image description#>
 @return <#return value description#>
 */
- (instancetype)initWithTitle:(NSString *)title image:(UIImage *)image;

@end
