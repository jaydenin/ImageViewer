//
//  GQImageViewrConfigure.m
//  ImageViewer
//
//  Created by 高旗 on 16/11/30.
//  Copyright © 2016年 tusm. All rights reserved.
//

#import "GQImageViewrConfigure.h"

@implementation GQImageViewrConfigure

- (instancetype)init {
    self = [super init];
    if (self) {
        _usePageControl = YES;
        _needLoopScroll = NO;
        _needPanGesture = YES;
        _laucnDirection = GQLaunchDirectionBottom;
    }
    return self;
}

- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                                    scaleType:(GQImageViewerScaleType)scaleType {
    return [self configureWithImageViewBgColor:imageViewBgColor
                               textViewBgColor:[[UIColor blackColor] colorWithAlphaComponent:0.3]
                                     textColor:[UIColor whiteColor]
                                      textFont:[UIFont systemFontOfSize:15]
                                 maxTextHeight:200
                                textEdgeInsets:UIEdgeInsetsZero
                                     scaleType:scaleType];
}

- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                              textViewBgColor:(UIColor *)textViewBgColor
                                    textColor:(UIColor *)textColor
                                     textFont:(UIFont *)textFont
                                maxTextHeight:(CGFloat )maxTextHeight
                               textEdgeInsets:(UIEdgeInsets)textEdgeInsets {
    return [self configureWithImageViewBgColor:imageViewBgColor
                               textViewBgColor:textViewBgColor
                                     textColor:textColor
                                      textFont:textFont
                                 maxTextHeight:maxTextHeight
                                textEdgeInsets:textEdgeInsets
                                     scaleType:GQImageViewerScaleTypeFullyDisplay];
}

- (instancetype)configureWithImageViewBgColor:(UIColor *)imageViewBgColor
                              textViewBgColor:(UIColor *)textViewBgColor
                                    textColor:(UIColor *)textColor
                                     textFont:(UIFont *)textFont
                                maxTextHeight:(CGFloat)maxTextHeight
                               textEdgeInsets:(UIEdgeInsets)textEdgeInsets
                                    scaleType:(GQImageViewerScaleType)scaleType {
    self.imageViewBgColor = imageViewBgColor;
    self.textViewBgColor = textViewBgColor;
    self.textColor = textColor;
    self.textFont = textFont;
    self.maxTextHeight = maxTextHeight;
    self.textEdgeInsets = textEdgeInsets;
    self.scaleType = scaleType;
    return self;
}

@end
