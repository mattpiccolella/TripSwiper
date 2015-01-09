//
//  OverlayView.h
//  TripSwiper
//
//  Created by Matt on 1/9/14.
//  Copyright (c) 2014 Matthew Piccolella. All rights reserved.
//
//  Adapted from https://github.com/cwRichardKim/TinderSimpleSwipeCards

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger , GGOverlayViewMode) {
    GGOverlayViewModeLeft,
    GGOverlayViewModeRight
};

@interface OverlayView : UIView

@property (nonatomic) GGOverlayViewMode mode;
@property (nonatomic, strong) UIImageView *imageView;

@end
