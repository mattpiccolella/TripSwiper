//
//  OverlayView.m
//  TripSwiper
//
//  Created by Matt on 1/9/14.
//  Copyright (c) 2014 Matthew Piccolella. All rights reserved.
//
//  Adapted from https://github.com/cwRichardKim/TinderSimpleSwipeCards

#import "OverlayView.h"

@implementation OverlayView
@synthesize imageView;

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor whiteColor];
        imageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"noButton"]];
        [self addSubview:imageView];
    }
    return self;
}

-(void)setMode:(GGOverlayViewMode)mode {
    if (self.mode == mode) {
        return;
    }
    
    self.mode = mode;
    
    if(mode == GGOverlayViewModeLeft) {
        imageView.image = [UIImage imageNamed:@"noButton"];
    } else {
        imageView.image = [UIImage imageNamed:@"yesButton"];
    }
}

-(void)layoutSubviews {
    [super layoutSubviews];
    imageView.frame = CGRectMake(50, 50, 100, 100);
}

@end
