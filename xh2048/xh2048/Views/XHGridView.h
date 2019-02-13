//
//  XHGridView.h
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <UIKit/UIKit.h>


@class XHGrid;

@interface XHGridView : UIView

/**
 * Create the entire background of the view with the grid at the correct position.
 *
 * @param grid The grid object that the image bases on.
 */
+ (UIImage *)gridImageWithGrid:(XHGrid *)grid;

/**
 * Create the entire background of the view with a translucent overlay on the grid.
 * The rest of the image is clear color, to create the illusion that the overlay is
 * only over the grid.
 */
+ (UIImage *)gridImageWithOverlay;

@end
