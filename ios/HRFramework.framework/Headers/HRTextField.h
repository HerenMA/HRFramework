//
//  HRTextField.h
//  HRFramework
//
//  Created by 尹建军 on 2017/6/30.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HRTextField;

@protocol HRTextFieldDelegate <NSObject>
@optional
- (void)textFieldReturnKeyPress:(HRTextField *)textField;
- (void)deleteBackward:(HRTextField *)textField;

@end

typedef NS_ENUM(NSInteger, LimitType) {
    /// 截取字符串
    InterceptionString = 0,
    /// 无法输入
    UnableToEnter = 1
};

/**
 单行文本框
 */
@interface HRTextField : UITextField

/// 能够输入的最大字符串长度
@property (assign, nonatomic) NSUInteger maxWordNumber;
/// 长度限制样式, default is InterceptionString
@property (assign, nonatomic) LimitType limiType;
/// 是否筛除emoji表情, default is NO
@property (assign, nonatomic) BOOL isEmoticons;
/// 输入内容的起始坐标, default is (8,8)
@property (assign, nonatomic) CGPoint textPoint;
/// 可输入字数
@property (assign, nonatomic) NSInteger canEnterWordsNumber;
/// 委托
@property (weak, nonatomic) id<HRTextFieldDelegate> returnDelegate;
/// 占位符字体颜色
@property (strong, nonatomic) UIColor *placeholderColor;
/// 内边距
@property (assign, nonatomic) UIEdgeInsets insets;

/**
 获取光标位置

 @return <#return value description#>
 */
- (NSRange)selectedRange;

/**
 设置光标位置

 @param range <#range description#>
 */
- (void)setSelectedRange:(NSRange)range;

@end
