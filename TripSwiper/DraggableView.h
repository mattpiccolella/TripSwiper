//
//  DraggableView.h
//  TripSwiper
//
//  Created by Matt on 1/9/14.
//  Copyright (c) 2014 Matthew Piccolella. All rights reserved.
//
//  Adapted from https://github.com/cwRichardKim/TinderSimpleSwipeCards


#import <UIKit/UIKit.h>
#import "OverlayView.h"

@protocol DraggableViewDelegate <NSObject>

-(void)cardSwipedLeft:(UIView *)card;
-(void)cardSwipedRight:(UIView *)card;

@end

@interface DraggableView : UIView

@property (weak) id<DraggableViewDelegate> delegate;

@property (nonatomic, strong)UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic)CGPoint originalPoint;
@property (nonatomic,strong)OverlayView *overlayView;
@property (nonatomic,strong)UILabel *information;

-(void)leftClickAction;
-(void)rightClickAction;

@end
