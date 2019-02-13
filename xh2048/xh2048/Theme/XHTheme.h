//
//  XHTheme.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol XHTheme <NSObject>

/** The background color of the board base. */
+ (UIColor *)boardColor;

/** The background color of the entire scene. */
+ (UIColor *)backgroundColor;

/** The background color of the score board. */
+ (UIColor *)scoreBoardColor;

/** The background color of the button. */
+ (UIColor *)buttonColor;

/** The name of the bold font. */
+ (NSString *)boldFontName;

/** The name of the regular font. */
+ (NSString *)regularFontName;

/**
 * The color for the given level. If level is greater than 15, return the color for Level 15.
 *
 * @param level The level of the tile.
 */
+ (UIColor *)colorForLevel:(NSInteger)level;


/**
 * The text color for the given level. If level is greater than 15, return the color for Level 15.
 *
 * @param level The level of the tile.
 */
+ (UIColor *)textColorForLevel:(NSInteger)level;

@end

@interface XHTheme : NSObject


/**
 * The theme we are using.
 *
 * @param type The index of the theme.
 */
+ (Class)themeClassForType:(NSInteger)type;

@end
