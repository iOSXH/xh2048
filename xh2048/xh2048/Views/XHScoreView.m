//
//  XHScoreView.m
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import "XHScoreView.h"

@implementation XHScoreView

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self commonInit];
    }
    return self;
}


- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
        [self commonInit];
    }
    return self;
}


- (void)commonInit
{
    self.layer.cornerRadius = GSTATE.cornerRadius;
    self.layer.masksToBounds = YES;
    self.backgroundColor = [UIColor greenColor];
}


- (void)updateAppearance
{
    self.backgroundColor = [GSTATE scoreBoardColor];
    self.title.font = [UIFont fontWithName:[GSTATE boldFontName] size:12];
    self.score.font = [UIFont fontWithName:[GSTATE regularFontName] size:16];
}

/*
 // Only override drawRect: if you perform custom drawing.
 // An empty implementation adversely affects performance during animation.
 - (void)drawRect:(CGRect)rect
 {
 // Drawing code
 }
 */

@end

