//
//  ViewController.h
//  Ejemplo01
//
//  Created by Hansel Ramos Osorio on 4/25/15.
//  Copyright (c) 2015 Hansel Ramos Osorio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *viewTweetBody;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) Tweet *tweet;

- (IBAction)tweetAction:(id)sender;
@end

