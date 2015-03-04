//
//  ViewController.h
//  MyTweet
//
//  Created by 横井一樹 on 2015/03/01.
//  Copyright (c) 2015年 LifeisTech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Social/Social.h>

@interface ViewController : UIViewController
<UITableViewDataSource,UITableViewDelegate>{
    NSArray *array;
    IBOutlet UITableView *timelineTableView;
}

-(void)twitterTimeline;
-(IBAction)tweetButton;
-(IBAction)refreshButton;

@end

