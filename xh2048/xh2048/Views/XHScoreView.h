//
//  XHScoreView.h
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHScoreView : UIView

@property (nonatomic, weak) IBOutlet UILabel *title;
@property (nonatomic, weak) IBOutlet UILabel *score;

/** Updates the appearance of subviews and itself. */
- (void)updateAppearance;

@end

