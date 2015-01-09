//
//  DraggableViewBackground.h
//  TripSwiper
//
//  Created by Matt on 1/9/14.
//  Copyright (c) 2014 Matthew Piccolella. All rights reserved.
//
//  Adapted from https://github.com/cwRichardKim/TinderSimpleSwipeCards

#import <UIKit/UIKit.h>
#import "DraggableView.h"

@interface DraggableViewBackground : UIView <DraggableViewDelegate>

-(void)cardSwipedLeft:(UIView *)card;
-(void)cardSwipedRight:(UIView *)card;

@property (retain,nonatomic)NSArray *exampleCardLabels;
@property (retain,nonatomic)NSMutableArray *allCards;


@end
