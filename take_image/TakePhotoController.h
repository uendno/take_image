//
//  TakePhotoController.h
//  take_image
//
//  Created by Thang Tran on 5/27/16.
//  Copyright © 2016 Thang Tran. All rights reserved.
//

#import "ViewController.h"

@interface TakePhotoController : ViewController <UIImagePickerControllerDelegate, UINavigationBarDelegate>


@property (nonatomic, strong) IBOutlet UIImageView *photo;

- (IBAction)takePhoto:(UIButton *)sender;
- (IBAction)selectPhoto:(UIButton *)sender;


@end
