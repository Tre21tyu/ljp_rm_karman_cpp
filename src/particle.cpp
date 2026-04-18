struct Particle {
    float x, y;
    float vx, vy;
};

void updateParticle(Particle& p, float dt) {
// Update particle with uniform motion
   p.x += p.vx * dt;
   p.y += p.vy * dt;
}
