import torch
import torch.nn.functional as F
import math
import random

def render_voxel_efficient(voxel_tensor, image_size=224):

    device = voxel_tensor.device
    
    pitch = random.uniform(-math.pi / 4, math.pi / 4)
    yaw = random.uniform(0, 2 * math.pi)
    
    R_x = torch.tensor([
        [1, 0, 0],
        [0, math.cos(pitch), -math.sin(pitch)],
        [0, math.sin(pitch), math.cos(pitch)]
    ], dtype=torch.float32, device=device)
    
    R_y = torch.tensor([
        [math.cos(yaw), 0, math.sin(yaw)],
        [0, 1, 0],
        [-math.sin(yaw), 0, math.cos(yaw)]
    ], dtype=torch.float32, device=device)
    
    R = torch.mm(R_y, R_x)
    
    y = torch.linspace(-1, 1, image_size, device=device)
    x = torch.linspace(-1, 1, image_size, device=device)
    mesh_y, mesh_x = torch.meshgrid(y, x, indexing='ij')
    mesh_z = torch.zeros_like(mesh_x) 
    
    camera_grid = torch.stack([mesh_x, mesh_y, mesh_z], dim=-1).reshape(-1, 3)
    
    rotated_camera_grid = torch.mm(camera_grid, R.t())
    
    grid_5d = rotated_camera_grid.reshape(1, image_size, image_size, 1, 3)
    
    rendered_2d = F.grid_sample(
        voxel_tensor.unsqueeze(1), # [1, 1, 32, 32, 32]
        grid_5d,
        mode='bilinear', 
        padding_mode='zeros',
        align_corners=False
    )
    
    # remove dimensions -> [1, 224, 224]
    img_2d = rendered_2d.squeeze(-1).squeeze(1)
    
    final_image = img_2d.repeat(1, 3, 1, 1).squeeze(0)
    
    return final_image

