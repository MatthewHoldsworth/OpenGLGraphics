#pragma once
#include "../nclgl/OGLRenderer.h"
#include "../nclgl/Camera.h"

class Renderer : public OGLRenderer {
public:
	Renderer(Window & parent);
	virtual ~Renderer(void);
	
	virtual void RenderScene();
	
	void SwitchToPerspective();
	void SwitchToOrthographic();
	
	inline void SetScale(float s) { scale = s; }
	inline void SetRotation(float r) { rotation = r; }
	inline void SetFov(float f) { fov = f; }
	inline void SetPosition(Vector3 p) { position = p; }

	void UpdateScene(float);
	
protected:
	Camera* camera;
	Mesh * triangle;
	Shader * matrixShader;
	float scale;
	float rotation;
	float fov;
	Vector3 position;
	
};
