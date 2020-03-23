//
//  TMPopView.h
//  TMPopView
//
//  Created by wangpeng on 2018/11/1.
//  Copyright © 2018 mrstock. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TMAnimationPopStyle) {
    TMAnimationPopStyleNO = 0,              //默认，没有动画
    TMAnimationPopStyleScale,               //缩放样式
    TMAnimationPopStyleShakeFromTop,        //从屏幕上边滑出
    TMAnimationPopStyleShakeFromBottom,     //从屏幕下边滑出
    TMAnimationPopStyleShakeFromLeft,       //从屏幕左边滑出
    TMAnimationPopStyleShakeFromRight       //从屏幕右边滑出
};

@interface TMPopView : UIView

/**
 *  动画时间
 */
@property (nonatomic, assign) NSTimeInterval duration;

/**
 *  背景透明度 默认是0.5
 */
@property (nonatomic, assign) CGFloat bgAlpha;

/**
 *  是否可以点击背景dismiss 默认是YES
 */
@property (nonatomic, assign) BOOL isClickBgDismiss;

/**
 *  初始化方法   customView：自定义view  style：pop的样式，默认是没有动画的
 */
- (instancetype)initWithCustomView:(UIView *)customView
                             style:(TMAnimationPopStyle)style;

/**
 *  弹出
 */
- (void)pop;

/**
 *  消失
 */
- (void)dismiss;

@end
