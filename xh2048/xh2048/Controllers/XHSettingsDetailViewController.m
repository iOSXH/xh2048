//
//  XHSettingsDetailViewController.m
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import "XHSettingsDetailViewController.h"

@interface XHSettingsDetailViewController ()

@end

@implementation XHSettingsDetailViewController

- (instancetype)initWithStyle:(UITableViewStyle)style {
    self = [super initWithStyle:style];
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationController.navigationBar.tintColor = [GSTATE scoreBoardColor];
}


# pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.options.count;
}

- (NSString *)tableView:(UITableView *)tableView titleForFooterInSection:(NSInteger)section {
    return self.footer;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Settings Detail Cell"];
    
    cell.textLabel.text = [self.options objectAtIndex:indexPath.row];
    cell.accessoryType = ([Settings integerForKey:self.title] == indexPath.row) ?
    UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    cell.tintColor = [GSTATE scoreBoardColor];
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [Settings setInteger:indexPath.row forKey:self.title];
    [self.tableView reloadData];
    GSTATE.needRefresh = YES;
}

@end
