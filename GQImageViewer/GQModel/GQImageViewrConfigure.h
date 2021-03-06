//
//  GQImageViewrConfigure.h
//  ImageViewer
//
//  Created by 高旗 on 16/11/30.
//  Copyright © 2016年 tusm. All rights reserved.
//

#import "GQImageViewrBaseObject.h"

typedef enum {
    GQLaunchDirectionBottom = 1,//从下往上推出
    GQLaunchDirectionTop,       //从上往下推出
    GQLaunchDirectionLeft,      //从左往右推出
    GQLaunchDirectionRight,     //从右往左推出
//    GQLaunchDirectionRect  //从图片点击位置放大
}GQLaunchDirection;

typedef enum : NSUInteger {
    GQImageViewerScaleTypeFullyDisplay,//让图片完全显示 (高度宽度等比例缩放到图片能完全显示)
    GQImageViewerScaleTypeEqualWidth, //等宽高度自适应（宽度为屏幕宽度  高度自适应）
    GQImageViewerScaleTypeEqualHeight, //等高宽度自适应（高度为屏幕高度，宽度自适应） //不推荐使用，效果不好
} GQImageViewerScaleType;

@interface GQImageViewrConfigure : GQImageViewrBaseObject

/*
 *  显示PageControl传yes   默认 : YES
 *  显示label就传no
 */
@property (nonatomic, assign) BOOL usePageControl;

/**
 是否需要循环滚动  默认 : NO
 */
@property (nonatomic, assign) BOOL needLoopScroll;

/**
 是否需要滑动消失手势  默认 : YES
 */
@property (nonatomic, assign) BOOL needPanGesture;

/**
 *  如果有网络图片则设置默认图片   默认 :  nil
 */
@property (nonatomic, copy) UIImage *placeholderImage;

/**
 自定义图片浏览界面class名称 必须继承GQImageView  需在设置DataSource之前设置 否则没有效果
 */
@property (nonatomic, strong) NSString *imageViewClassName;

/**
 *  推出方向  默认 : GQLaunchDirectionBottom
 */
@property (nonatomic, assign) GQLaunchDirection laucnDirection;

/**
 整体背景颜色
 */
@property (nonatomic, strong) UIColor *imageViewBgColor;

/**
 设置图片的等比例缩放  默认为等高宽度自适应
 */
@property (nonatomic, assign) GQImageViewerScaleType scaleType;

/**
 文字背景颜色
 */
@property (nonatomic, strong) UIColor *textViewBgColor;

/**
 文字颜色
 */
@property (nonatomic, strong) UIColor *textColor;

/**
 字体大小
 */
@property (nonatomic, strong) UIFont *textFont;

/**
 文字最高显示多高
 */
@property (nonatomic, assign) CGFloat maxTextHeight;

/**
 文本相对于父视图的缩进  距离四周的距离  UIEdgeInsetsMake(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right)
 */
@property (nonatomic, assign) UIEdgeInsets textEdgeInsets;

//如果没有使用到文字显示就使用这个方法初始化
- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                                    scaleType:(GQImageViewerScaleType)scaleType;

- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                              textViewBgColor:(UIColor *)textViewBgColor
                                    textColor:(UIColor *)textColor
                                     textFont:(UIFont *)textFont
                                maxTextHeight:(CGFloat)maxTextHeight
                               textEdgeInsets:(UIEdgeInsets)textEdgeInsets;

- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                              textViewBgColor:(UIColor *)textViewBgColor
                                    textColor:(UIColor *)textColor
                                     textFont:(UIFont *)textFont
                                maxTextHeight:(CGFloat)maxTextHeight
                               textEdgeInsets:(UIEdgeInsets)textEdgeInsets
                                    scaleType:(GQImageViewerScaleType)scaleType;

@end
