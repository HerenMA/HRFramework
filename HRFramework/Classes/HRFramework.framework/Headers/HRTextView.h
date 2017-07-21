//
//  HRTextView.h
//  HRFramework
//
//  Created by 尹建军 on 2017/6/30.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HRTextView;

@protocol HRTextViewDelegate<NSObject>
@optional
- (void)textViewReturnKeyPress:(HRTextView *)textView;
- (void)lwTextViewDidChange:(HRTextView *)textView;

@end


typedef NS_ENUM(NSInteger, LimitTextType) {
    /// 截取字符串
    InterceptionStringTextView = 0,
    /// 无法输入
    UnableToEnterTextView = 1
};


/**
 多行文本框
 */
@interface HRTextView : UITextView

/// 占位符
@property (strong, nonatomic) NSString *placeholder;
/// 占位符字体颜色
@property (strong, nonatomic) UIColor *placeholderColor;

/// 能够输入的最大字符串长度
@property (assign, nonatomic) NSInteger maxWordNumber;
/// 长度限制样式, default is 0
@property (assign, nonatomic) LimitTextType limiType;
/// 是否筛除emoji表情, default is NO
@property (assign, nonatomic) BOOL isEmoticons;
/// 输入内容的起始坐标, default is (8,8)
@property (assign, nonatomic) CGPoint textPoint;
/// 可输入字数
@property (assign, nonatomic) NSInteger canEnterWordsNumber;
/// 委托
@property (weak, nonatomic) id<HRTextViewDelegate> returnDelegate;


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
